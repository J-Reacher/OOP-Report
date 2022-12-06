// SV.CPP
#include <iostream>
#include <cstring>
#include "SV.h"

using namespace std;

// hàm hủy, xây dựng có tham số, xây dựng sao chép
SV::SV()
{
}
SV::~SV()
{
}

SV::SV(char masv, char tensv, char ngaysinh, char quequan)
{
	masv = masv;
	tensv = tensv;
	ngaysinh = ngaysinh;
	quequan = quequan;
}

SV::SV(const SV &SV)
{
}

// xóa xuống dòng
void SV::xoaxuongdong(char x[])
{
	int len = strlen(x);
	if (x[len - 1] == '\n')
		x[len - 1] = '\0';
}

// nhập SV
void SV::Nhapsv()
{
	cout << "Nhap ma sinh vien: ";
	masv = new char[10];
	fgets(masv, 10, stdin);
	xoaxuongdong(masv);

	cout << " Nhap ten sinh vien: ";
	tensv = new char[20];
	fgets(tensv, 20, stdin);
	xoaxuongdong(tensv);

	cout << " Nhap ngay sinh:";
	ngaysinh = new char[10];
	fgets(ngaysinh, 10, stdin);
	xoaxuongdong(ngaysinh);

	cout << " Nhap que quan:";
	quequan = new char[50];
	fgets(quequan, 50, stdin);
	xoaxuongdong(quequan);
}

// in sv
void SV::Insv()
{
	cout << masv << "\t" << tensv << "\t" << ngaysinh << "\t" << quequan << endl;
}

char *SV::Get_masv()
{
	return masv;
}
char *SV::Get_tensv()
{
	return tensv;
}
char *SV::Get_ngaysinh()
{
	return ngaysinh;
}
char *SV::Get_quequan()
{
	return quequan;
}

// sửa lại
void SV::Sualai(char *x, char *y, char *z)
{
	tensv = x;
	ngaysinh = y;
	quequan = z;
}

void SV::Sualai1(char*x){
	quequan=x;
}