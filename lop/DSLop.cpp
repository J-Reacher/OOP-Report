#include <iostream>
#include <cstring>

#include "DSLop.h"
using namespace std;

Dslop::Dslop(){}
Dslop::~Dslop(){}

void Dslop::xxd_dslop(char x[]) {
	int len = strlen(x);
	if (x[len - 1] == '\n')
		x[len - 1] = '\0';
}
void Dslop::Khoitaods() {
	int sl;
	cout << "Nhap so luong lop: ";
	cin >> sl; cin.ignore();
	soluong = sl;
	ds = new lop[sl];
}
void Dslop::Nhapdslop() {
	for (int i = 1; i <= soluong; i++) {
		cout << "\n";
		cout << "lop thu" << i << endl;
		ds[i].Nhaplop();
	}
}
void Dslop::Indslop() {
	cout << "malop" << "\t" << "tenlop" << "\t" << "chuyennganhdaotao" << "\t" << "khoahoc" << "\t" << "covanhoctap" << "\t" << "Tong" << endl;
	for (int i = 1; i <= soluong; i++) {
		ds[i].Inlop();
	}
}
void Dslop::Sapxeplop() {
	lop l;
	for (int i = 1; i <= soluong; i++) {
		for (int j = i + 1; j <= soluong; j++) {
			if (ds[i].Tong())
				ds[j].Tong();
			l = ds[i];
			ds[i] = ds[j];
			ds[j] = l;
		}
	}
}

void Dslop::Sualailop(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_malop(), ma) == 0) {
			found = 1;
			char* malop, * tenlop, * chuyennganhdaotao, * khoahoc, * covanhoctap;
			int tongso;

			cout << " Nhap ma lop: ";
			malop = new char[10];
			fgets(malop, 10, stdin);
			xxd_dslop(malop);

			cout << " Nhap ten lop: ";
			tenlop = new char[20];
			fgets(tenlop, 20, stdin);
			xxd_dslop(tenlop);

			cout << " Nhap chuyen nganh dao tao:";
			chuyennganhdaotao = new char[30];
			fgets(chuyennganhdaotao, 30, stdin);
			xxd_dslop(chuyennganhdaotao);

			cout << " Nhap khoa hoc:";
			khoahoc = new char[40];
			fgets(khoahoc, 40, stdin);
			xxd_dslop(khoahoc);

			cout << " Nhap co van hoc tap:";
			covanhoctap = new char[50];
			fgets(covanhoctap, 50, stdin);
			xxd_dslop(covanhoctap);


			cout << " Nhap tong so lớp : ";
			cin >> tongso;
			cin.ignore();
		}
	if (found == 0)
		cout << "Khong tim thay\n" << endl;
	else
		cout << "Sua lop thanh cong!\n" << endl;
}

void Dslop::Xoalop(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_malop(), ma) == 0) {
			found = 1;
			for (int j = i; j < soluong; j++) {
				ds[j] = ds[j + 1];
			}
			--soluong;
		}
	if (found == 0)
		cout << "Khong tim thay!\n" << endl;
	else
		cout << "Xoa thanh cong!\n" << endl;

}
void Dslop::Themlop() {
	soluong = soluong + 1;
	ds[soluong].Nhaplop();
	cout << "Them thanh cong!\n" << endl;
}
void Dslop::Timkiemlop(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].malop, ma) == 0) {
			ds[i].Inlop();
			found = 1;
		}
	if (found == 0)
		cout << "Khong tim thay!\n" << endl;
	else
		cout << "Tim thanh cong!\n" << endl;

}