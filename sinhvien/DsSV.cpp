#include <iostream>
#include <cstring>
#include "DsSV.h"
using namespace std;
void DsSV::xoaxuongdong1(char x[])
{
	int len = strlen(x);
	if (x[len - 1] == '\n')
		x[len - 1] = '\0';
}
void DsSV::Khoitaods()
{
	int sl;
	cout << "Nhap so luong Sinh vien: ";
	cin >> sl;
	cin.ignore();
	soluong = sl;
	ds = new SV[sl];
}
void DsSV::Nhapdssv()
{
	for (int i = 1; i <= soluong; i++)
	{
		cout << "\n";
		cout << "Sinh vien thu" << i << endl;
		ds[i].Nhapsv();
	}
}
void DsSV::Indssv()
{
	cout << "masv"
		 << "\t"
		 << "tensv"
		 << "\t"
		 << "ngaysinh"
		 << "\t"
		 << "quequan" << endl;
	for (int i = 1; i <= soluong; i++)
	{
		ds[i].Insv();
	}
}
void DsSV::Sapxepsv()
{
	SV l;
	for (int i = 1; i <= soluong; i++)
	{
		for (int j = i + 1; j <= soluong; j++)
		{
			l = ds[i];
			ds[i] = ds[j];
			ds[j] = l;
		}
	}
}

void DsSV::Sualaisv(char *ma)
{
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_masv(), ma) == 0)
		{
			found = 1;
			char *masv, *tensv, *ngaysinh, *quequan;

			cout << " Nhap ma sv: ";
			masv = new char[10];
			fgets(masv, 10, stdin);
			xoaxuongdong1(masv);

			cout << " Nhap ten lop: ";
			tensv = new char[20];
			fgets(tensv, 20, stdin);
			xoaxuongdong1(tensv);

			cout << " Nhap ngay sinh: ";
			ngaysinh = new char[30];
			fgets(ngaysinh, 30, stdin);
			xoaxuongdong1(ngaysinh);

			cout << " Nhap que quan:";
			quequan = new char[50];
			fgets(quequan, 50, stdin);
			xoaxuongdong1(quequan);
		}
	if (found == 0)
		cout << "Khong tim thay\n"
			 << endl;
	else
		cout << "Sua lop thanh cong!\n"
			 << endl;
}

void DsSV::Xoasv(char *ma)
{
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_masv(), ma) == 0)
		{
			found = 1;
			for (int j = i; j < soluong; j++)
			{
				ds[j] = ds[j + 1];
			}
			--soluong;
		}
	if (found == 0)
		cout << "Khong tim thay!\n"
			 << endl;
	else
		cout << "Xoa thanh cong!\n"
			 << endl;
}
void DsSV::Themsv()
{
	soluong = soluong + 1;
	ds[soluong].Nhapsv();
	cout << "Them thanh cong!\n"
		 << endl;
}
void DsSV::Timkiemsv(char *ma)
{
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_masv(), ma) == 0)
		{
			ds[i].Insv();
			found = 1;
		}
	if (found == 0)
		cout << "Khong tim thay!\n"
			 << endl;
	else
		cout << "Tim thanh cong!\n"
			 << endl;
}