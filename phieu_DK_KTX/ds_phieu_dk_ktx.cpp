#include <iostream>
#include <string>
#include <fstream>

#include "ds_phieu_dk_ktx.h"

ds_phieu_dk_ktx::ds_phieu_dk_ktx(){};
ds_phieu_dk_ktx::~ds_phieu_dk_ktx(){};

// file path need to be changed accordingly
std::string filepath = "/home/jack/Documents/Github/OOP/Report/phieu_DK_KTX/ds_phieu_dk_ktx.csv";

void ds_phieu_dk_ktx::khoitao_ds_phieu(int sl)
{
    soluong = sl;
    danhsach = new phieu_dk_ktx[sl];
}

void ds_phieu_dk_ktx::nhap_ds_phieu()
{
    for (int i = 0; i < soluong; i++)
    {
        danhsach[i].sothutu();
        std::cout << "\t " << danhsach[i].trave_stt() << std::endl;
        danhsach[i].nhap_phieu();
    }
}

void ds_phieu_dk_ktx::in_ds_phieu()
{
    for (int i = 0; i < soluong; i++)
    {
        danhsach[i].sothutu();
        std::cout << "\t " << danhsach[i].trave_stt() << std::endl;
        danhsach[i].in_phieu();
    }
}

void ds_phieu_dk_ktx::input_file()
{
    std::ifstream input_file(filepath, std::ios::app);

    while (input_file.good())
    {
        for (int i = 0; i < 3; i++)
        {
            std::string line;
            std::getline(input_file, line, ',');
            std::cout << line;
        }
    }
}

void ds_phieu_dk_ktx::output_file()
{
    std::ofstream output_file(filepath);

    if (output_file.is_open())
        std::cout << "The file has been written!" << std::endl;
    for (int i = 0; i < soluong; i++)
    {
        output_file << danhsach[i].trave_stt() << ", "
                    << danhsach[i].trave_tg_lap() << ", "
                    << danhsach[i].trave_tg_o() << ", "
                    << danhsach[i].trave_tienphong()
                    << std::endl;
    }
}
