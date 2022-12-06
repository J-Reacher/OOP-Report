#include <iostream>
#include <cstring>

#include "lop/DSLop.h"
#include "day/DsDay.h"

#include "sinhvien/DsSV.h"
#include "phong/Dsphong.h"

#include "phieu_DK_KTX/ds_phieu_dk_ktx.h"

void xoaxuongdong(char x[])
{
    int len = strlen(x);
    if (x[len - 1] == '\n')
        x[len - 1] = '\0';
};

int DS_phieu_DK_KTX()
{
    // Tao 1 doi tuong ten "aaa"
    // La Danh sach cac Phieu Dang ky o Ky tuc xa
    ds_phieu_dk_ktx aaa;

    while (true)
    {
        std::cout << "\t==Danh sach Phieu dk KTX==" << std::endl;
        std::cout << "\t|In danh sach phieu    :1" << std::endl;
        std::cout << "\t|Nhap danh sach phieu  :2" << std::endl;

        std::cout << "\t|Tro lai menu chinh    :0" << std::endl;

        int _ = 0;
        std::cout << "\t\tLua chon: ";
        std::cin >> _;
        std::cin.ignore();
        switch (_)
        {
        case 0:
            return 0;
        case 1: // aaa.in_ds_phieu();
            aaa.input_file();
            break;
        case 2:
            int n;
            std::cout << "\tSo luong Phieu: ";
            std::cin >> n;
            std::cin.ignore();
            aaa.khoitao_ds_phieu(n);
            aaa.nhap_ds_phieu();
            aaa.output_file();
            break;
        case 3:
            break;
        default:
            std::cout << "Lua chon khong ton tai!!" << std::endl;
            break;
        }
        std::cout << std::endl;
    }
}

int DS_phong()
{
    Dsphong a;
    int t, t1;
    char *ma, *n;
menu:
    std::cout << "Menu quan li:" << std::endl;
    std::cout << "1. Quan li phong" << std::endl;
    std::cout << "0. Thoat" << std::endl;
    std::cout << "Nhap lua chon: ";
    std::cin >> t;
    std::cin.ignore();
    switch (t)
    {
    case 1:
    menu1:
        std::cout << "*****CHUONG TRINH QUAN LY PHONG*****" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << " 1. Nhap danh sach phong" << std::endl;
        std::cout << " 2. In danh sach phong" << std::endl;
        std::cout << " 3. Them phong" << std::endl;
        std::cout << " 4. Sua phong" << std::endl;
        std::cout << " 5. Xoa phong" << std::endl;
        std::cout << " 6. Tim kiem phong" << std::endl;
        std::cout << " 7. Sap xep phong" << std::endl;
        std::cout << " 8. Tro lai" << std::endl;
        std::cout << " 0. Ket thuc" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << " ==> Nhap lua chon: ";
        std::cin >> t1;
        std::cin.ignore();
        while (t1 < 0 || t1 > 8)
        {
            std::cout << "Nhap lai lua chon: ";
            std::cin >> t1;
            std::cin.ignore();
        }
        switch (t1)
        {
        case 1:
            a.Khoitaods();
            a.Nhapdsphong();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 2:
            std::cout << "In ten phong\t\t" << std::endl;
            std::cout << "Danh sach phong" << std::endl;
            a.Indsphong();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 3:
            std::cout << "Them ten phong\t\t" << std::endl;
            a.Themphong();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 4:
            std::cout << "Sua ten phong\t\t" << std::endl;
            std::cout << "Nhap ma can sua: ";
            ma = new char[20];
            fgets(ma, 20, stdin);
            xoaxuongdong(ma);
            a.Sualaiphong(ma);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 5:
            std::cout << "Xoa ten phong\t\t" << std::endl;
            std::cout << "Nhap ma can xoa: ";
            n = new char[20];
            fgets(n, 20, stdin);
            xoaxuongdong(n);
            a.Xoaphong(n);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 6:
            std::cout << "Tim kiem phong\t\t" << std::endl;
            std::cout << "Nhap ma can tim: ";
            ma = new char[20];
            fgets(ma, 20, stdin);
            xoaxuongdong(ma);
            a.Timkiemphong(ma);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 7:
            std::cout << "Sap xep phong\t\t" << std::endl;
            std::cout << "Danh sach sau khi sap xep: " << std::endl;
            a.Sapxepphong();
            a.Indsphong();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 8:
            goto menu;
        case 0:
            exit(0);
        }
    }
    return 0;
}

int DS_day()
{
    DsDay a;

    std::cout << "\tDanh sach Day" << std::endl;
    while (true)
    {
        std::cout << "\t|In danh sach       :1" << std::endl;
        std::cout << "\t|Nhap danh sach     :2" << std::endl;
        std::cout << "\t|Them danh sach day :3" << std::endl;
        std::cout << "\t|Sua ten day    :4" << std::endl;
        std::cout << "\t|tim kiem day   :5" << std::endl;
        std::cout << "\t|sap xep day    :6" << std::endl;
        std::cout << "\t|xoa day        :7" << std::endl;
        std::cout << "\t|Tro lai menu chinh :0" << std::endl;

        int _ = 0;
        std::cout << "\t\tLua chon: ";
        std::cin >> _;
        std::cin.ignore();
        switch (_)
        {
        case 0:
            return 0;
        case 1:
            a.Indsday();
            break;
        case 2:
            int n;
            std::cout << "So luong danh sach: ";
            std::cin >> n;
            std::cin.ignore();
            a.Khoitaodsday(n);
            a.Nhapdsday();
            break;
        case 3:
            char *ma;
            ma = new char[15];
            std::cout << "Them day" << std::endl;
            fflush(stdin);
            fgets(ma, sizeof(ma), stdin);
            a.Themday();
            a.Indsday();
            break;
        case 4:
            std::cout << "Nhap ma can tim de thay doi: ";
            fflush(stdin);
            fgets(ma, 15, stdin);
            a.Suatenday(ma);
            a.Indsday();
            break;
        case 5:
            char *f;
            f = new char[15];
            std::cout << "Nhap ma can tim: ";
            fflush(stdin);
            fgets(f, 15, stdin);
            a.Timkiem(f);
            std::cout << "Ket qua tim kiem " << std::endl;
            break;
        case 6:
            std::cout << "Ket qua sau khi sap xep theo ma khoa" << std::endl;
            a.Sapxep();
            a.Indsday();
            break;
        case 7:
            char *m;
            m = new char[15];
            std::cout << "Nhap ma can xoa: ";
            std::cin >> m;
            std::cin.ignore();
            fgets(m, sizeof(m), stdin);
            a.Xoa(m);
            a.Indsday();
            break;
        default:
            std::cout << "Lua chon khong ton tai!!" << std::endl;
            break;
        }
        std::cout << std::endl;
    }
    return 0;
}

int DS_sinhvien()
{
    DsSV a;
    int t, t1;
    char *ma, *m, *n;
menu:
    std::cout << "Menu quan li:" << std::endl;
    std::cout << "1. Quan li Sinh vien" << std::endl;
    std::cout << "0. Thoat" << std::endl;
    std::cout << "Nhap lua chon: ";
    std::cin >> t;
    std::cin.ignore();
    switch (t)
    {
    case 1:
    menu1:
        std::cout << "*****CHUONG TRINH QUAN LY SINH VIEN*****" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << " 1. Nhap danh sach sinh vien" << std::endl;
        std::cout << " 2. In danh sach sinh vien" << std::endl;
        std::cout << " 3. Them sinh vien" << std::endl;
        std::cout << " 4. Sua sinh vien" << std::endl;
        std::cout << " 5. Xoa sinh vien" << std::endl;
        std::cout << " 6. Tim kiem sinh vien" << std::endl;
        std::cout << " 7. Sap xep sinh vien" << std::endl;
        std::cout << " 8. Tro lai" << std::endl;
        std::cout << " 0. Ket thuc" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << " ==> Nhap lua chon: ";
        std::cin >> t1;
        std::cin.ignore();
        while (t1 < 0 || t1 > 8)
        {
            std::cout << "Nhap lai lua chon: ";
            std::cin >> t1;
            std::cin.ignore();
        }
        switch (t1)
        {
        case 1:
            a.Khoitaods();
            a.Nhapdssv();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 2:
            std::cout << "In ten sinh vien\t\t" << std::endl;
            std::cout << "Danh sach sinh vien" << std::endl;
            a.Indssv();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 3:
            std::cout << "Them ten sinh vien\t\t" << std::endl;
            a.Themsv();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 4:
            std::cout << "Sua ten sinh vien\t\t" << std::endl;
            std::cout << "Nhap ma can sua: ";
            ma = new char[20];
            fgets(ma, 20, stdin);
            xoaxuongdong(ma);
            a.Sualaisv(ma);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 5:
            std::cout << "Xoa ten sinh vien\t\t" << std::endl;
            std::cout << "Nhap ma can xoa: ";
            n = new char[20];
            fgets(n, 20, stdin);
            xoaxuongdong(n);
            a.Xoasv(n);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 6:
            std::cout << "Tim kiem sinh vien\t\t" << std::endl;
            std::cout << "Nhap ma can tim: ";
            ma = new char[20];
            fgets(ma, 20, stdin);
            xoaxuongdong(ma);
            a.Timkiemsv(ma);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 7:
            std::cout << "Sap xep sinh vien\t\t" << std::endl;
        }
    }
    return 0;
}

int DS_lop()
{
    Dslop a;
    int t, t1;
    char *ma, *n;
menu:
    std::cout << "Menu quan li:" << std::endl;
    std::cout << "1. Quan li lop" << std::endl;
    std::cout << "0. Thoat" << std::endl;
    std::cout << "Nhap lua chon: ";
    std::cin >> t;
    std::cin.ignore();
    switch (t)
    {
    case 1:
    menu1:
        std::cout << "*****CHUONG TRINH QUAN LY LOP*****" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << " 1. Nhap danh sach lop" << std::endl;
        std::cout << " 2. In danh sach lop" << std::endl;
        std::cout << " 3. Them lop" << std::endl;
        std::cout << " 4. Sua lop" << std::endl;
        std::cout << " 5. Xoa lop" << std::endl;
        std::cout << " 6. Tim kiem lop" << std::endl;
        std::cout << " 7. Sap xep lop" << std::endl;
        std::cout << " 8. Tro lai" << std::endl;
        std::cout << " 0. Ket thuc" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << " ==> Nhap lua chon: ";
        std::cin >> t1;
        std::cin.ignore();
        while (t1 < 0 || t1 > 8)
        {
            std::cout << "Nhap lai lua chon: ";
            std::cin >> t1;
            std::cin.ignore();
        }
        switch (t1)
        {
        case 1:
            a.Khoitaods();
            a.Nhapdslop();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 2:
            std::cout << "In ten lop\t\t" << std::endl;
            std::cout << "Danh sach lop" << std::endl;
            a.Indslop();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 3:
            std::cout << "Them ten lop\t\t" << std::endl;
            a.Themlop();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 4:
            std::cout << "Sua ten lop\t\t" << std::endl;
            std::cout << "Nhap ma can sua: ";
            ma = new char[20];
            fgets(ma, 20, stdin);
            xoaxuongdong(ma);
            a.Sualailop(ma);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 5:
            std::cout << "Xoa ten lop\t\t" << std::endl;
            std::cout << "Nhap ma can xoa: ";
            n = new char[20];
            fgets(n, 20, stdin);
            xoaxuongdong(n);
            a.Xoalop(n);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 6:
            std::cout << "Tim kiem lop\t\t" << std::endl;
            std::cout << "Nhap ma can tim: ";
            ma = new char[20];
            fgets(ma, 20, stdin);
            xoaxuongdong(ma);
            a.Timkiemlop(ma);
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 7:
            std::cout << "Sap xep lop\t\t" << std::endl;
            std::cout << "Danh sach sau khi sap xep: " << std::endl;
            a.Sapxeplop();
            a.Indslop();
            std::cout << "Nhap enter de tiep tuc!!\n";
            std::cin.get();
            goto menu1;
        case 8:
            goto menu;
        case 0:
            exit(0);
        }
    }
    return 0;
}

//************************************************************************************************
// The main function
int main()
{
    while (true)
    {
        std::cout << "MENU CHINH" << std::endl;
        std::cout << "|Quan ly DS day                   :1" << std::endl;
        std::cout << "|Quan ly DS phong                 :2" << std::endl;
        std::cout << "|Quan ly DS lop                   :3" << std::endl;
        std::cout << "|Quan ly DS sinh vien             :4" << std::endl;
        std::cout << "|Quan ly DS Phieu DK KTX          :5" << std::endl;

        std::cout << "|=== Ket thuc chuong trinh ===    :0" << std::endl;

        int _ = 0;
        std::cout << "\tLua chon: ";
        std::cin >> _;
        std::cin.ignore();
        switch (_)
        {
        case 0:
            return 0;
        case 1:
            DS_day();
            break;
        case 2:
            DS_phong();
            break;
        case 3:
            DS_lop();
            break;
        case 4:
            DS_sinhvien();
            break;
        case 5:
            DS_phieu_DK_KTX();
            break;
        default:
            std::cout << "Lua chon khong ton tai!!" << std::endl;
            break;
        }
        std::cout << std::endl;
    }
    return 0;
}
