
#include <iostream>
#include <string.h>
#include "Dsphong.h"
using namespace std;

Dsphong::Dsphong(){};
Dsphong::~Dsphong(){};

void Dsphong::xxd_dsphong(char x[]) {
	int len = strlen(x);
	if (x[len - 1] == '\n')
		x[len - 1] = '\0';
}
void Dsphong::Khoitaods() {
	int sl;
	cout << "Nhap so luong phong: ";
	cin >> sl; cin.ignore();
	soluong = sl;
	ds = new phong[sl];
}
void Dsphong::Nhapdsphong() {
	for (int i = 1; i <= soluong; i++) {
		cout << "\n";
		cout << "Nhap phong thu " << i << endl;
		ds[i].Nhapphong();
	}
}
void Dsphong::Indsphong() {
	cout << "maday\t\t\t" << "maphong\t\t\t" << "tenphong\t\t\t" << "batbuoc\t\t\t" << "songuoi" << endl;
	for (int i = 1; i <= soluong; i++) {
		ds[i].Inphong();
	}
}
void Dsphong::Sapxepphong() {
	phong l;
	for (int i = 1; i <= soluong; i++) {
		for (int j = i + 1; j <= soluong; j++) {
			if (ds[i].Trong())
				ds[j].Trong();
			l = ds[i];
			ds[i] = ds[j];
			ds[j] = l;
		}
	}
}
void Dsphong::Sualaiphong(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_maphong(), ma) == 0) {
			found = 1;
			char* c, * d, * e;
			int a, b;

			cout << "Nhap ma day: ";
			c = new char[10];
			fgets(c, 10, stdin);
			xxd_dsphong(c);

			cout << " Nhap ma phong: ";
			d = new char[20];
			fgets(d, 20, stdin);
			xxd_dsphong(d);

			cout << "Nhap ten phong: ";
			e = new char[30];
			fgets(e, 30, stdin);
			xxd_dsphong(e);

			cout << "Nhap so nguoi bat buoc: ";
			cin >> a;
			cin.ignore();

			cout << "Nhap so nguoi dang o: ";
			cin >> b;
			cin.ignore();
			ds[i].Sualaiphong(c, a, b);
		}
	if (found == 0)
		cout << "Khong tim thay!\n" << endl;
	else
		cout << "Sua phong oke!\n" << endl;
}

void Dsphong::Xoaphong(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_maphong(), ma) == 0) {
			found = 1;
			for (int j = i; j < soluong; j++) {
				ds[j] = ds[j + 1];
			}
			--soluong;
		}
	if (found == 0)
		cout << "Khong tim thay!\n" << endl;            
	else
		cout << "Xoa oke!\n" << endl;

}
void Dsphong::Themphong() {
	soluong = soluong + 1;
		ds[soluong].Nhapphong();
		cout << "Them oke!\n" << endl;
}
void Dsphong::Timkiemphong(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_maphong(), ma) == 0) {
			ds[i].Inphong();
			found = 1;
		}
	if (found == 0)
		cout << "Khong tim thay!\n" << endl;
	else
		cout << "Tim phong oke!\n" << endl;

}