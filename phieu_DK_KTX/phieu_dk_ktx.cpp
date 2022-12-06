#include "phieu_dk_ktx.h"
#include <iostream>
#include <cstring>

phieu_dk_ktx::phieu_dk_ktx(){};
phieu_dk_ktx::~phieu_dk_ktx(){};

void phieu_dk_ktx::xxd(char __a[])
{
    size_t l = strlen(__a);
    if (__a[l - 1] == '\n')
        __a[l - 1] = '\0';
}

int phieu_dk_ktx::sothutu()
{
    return stt += 1;
}

void phieu_dk_ktx::nhap_phieu()
{
    std::cout << "\tThoi gian lap phieu: ";
    tg_lap = new char[32];
    fflush(stdin);
    fgets(tg_lap, sizeof(tg_lap), stdin);
    xxd(tg_lap);

    std::cout << "\tThoi gian o: ";
    tg_o = new char[32];
    fflush(stdin);
    fgets(tg_o, sizeof(tg_o), stdin);
    xxd(tg_o);

    std::cout << "\tTien phong theo thang: ";
    std::cin >> tienphong_theothang;
    std::cin.ignore();
}

void phieu_dk_ktx::in_phieu()
{
    sothutu();
    std::cout << "\tSo thu tu: " << stt << std::endl;
    std::cout << "\tThoi gian lap phieu: " << tg_lap << std::endl;
    std::cout << "\tThoi gian o: " << tg_o << std::endl;
    std::cout << "\tTien phong theo thang: " << tienphong_theothang << std::endl;
}

int phieu_dk_ktx::trave_stt() { return stt; }
char *phieu_dk_ktx::trave_tg_lap() { return tg_lap; }
char *phieu_dk_ktx::trave_tg_o() { return tg_o; }
int phieu_dk_ktx::trave_tienphong() { return tienphong_theothang; };

void phieu_dk_ktx::datlai_thongtin_phieu(int a, char *b, char *c, int d)
{
    stt = a;
    tg_lap = b;
    tg_o = c;
    tienphong_theothang = d;
};
