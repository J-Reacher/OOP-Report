#include <iostream>
#include <cstring>
#include "Lop.h"

using namespace std;

//hàm hủy, xây dựng có tham số, xây dựng sao chép
lop::lop() {}
lop::~lop() {}

lop::lop(const lop&) {}


//xóa xuống dòng
void lop::xxd_lop(char x[]) {
	int len = strlen(x);
	if (x[len - 1] == '\n')
		x[len - 1] = '\0';
}


//nhập lop
void lop::Nhaplop() {
	cout << "Nhap ma lop: ";
	malop = new char[10];
	fgets(malop, 10, stdin);
	xxd_lop(malop);

	cout << " Nhap ten lop: ";
	tenlop = new char[20];
	fgets(tenlop, 20, stdin);
	xxd_lop(tenlop);

	cout << " Nhap chuyen nganh dao tao:";
	chuyennganhdaotao = new char[30];
	fgets(chuyennganhdaotao, 30, stdin);
	xxd_lop(chuyennganhdaotao);

	cout << " Nhap khoa hoc:";
	khoahoc = new char[40];
	fgets(khoahoc, 40, stdin);
	xxd_lop(khoahoc);

	cout << " Nhap co van hoc tap:";
	covanhoctap = new char[50];
	fgets(covanhoctap, 50, stdin);
	xxd_lop(covanhoctap);


	cout << " Nhap tong so lớp : ";
	cin >> tongso;
	cin.ignore();
}


//in lop
void lop::Inlop() {
	cout << malop << "\t" << tenlop << "\t" << chuyennganhdaotao << "\t" << khoahoc << "\t" << covanhoctap << "\t" << Tong() << "\t ", Ketqua();
}

int lop::Tong() {
	return tongso;
}
char* lop::Get_malop() {
	return malop;
}
char* lop::Get_tenlop() {
	return tenlop;
}
char* lop::Get_chuyennghanhdaotao() {
	return chuyennganhdaotao;
}
char* lop::Get_khoahoc() {
	return khoahoc;
}
char* lop::Get_covanhoctap() {
	return covanhoctap;
}


//kết quả
void lop::Ketqua() {
	int n = Tong();
	if (n <= 25)
		cout << "Du\n";
	else
		cout << "Khong du\n";
}


//sửa lại
void lop::Sualai(char* x, int a) {
	tenlop = x;
	tongso = a;
}