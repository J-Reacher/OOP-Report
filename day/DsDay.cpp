#include <iostream>
#include <cstring>

#include "DsDay.h"


DsDay::DsDay(){}
DsDay::~DsDay() {}


void xxd_dsday(char* e) {
	int len = strlen(e);
	if (e[len - 1] == '\n')
		e[len - 1] = '\0';
}


void DsDay::Khoitaodsday(int sl) {
	soluong = sl;
	ds = new Day[sl];
}


void DsDay::Nhapdsday() {
	for (int i = 1; i <= soluong; i++) {
		std::cout << "Day thu " << i << std::endl;
		ds[i].nhapday();
	}
}


void DsDay::Indsday() {
	for (int i = 1; i <= soluong; i++)
		ds[i].inday();
}


void DsDay::Themday() {
	soluong++;
	ds[soluong].nhapday();
}


void DsDay::Suatenday(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_Maday(), ma) == 0) {
			found = 1;
			std::cout << "Nhap ten: ";
			char* c;
			c = new char[30];
			fflush(stdin);
			fgets(c, 30, stdin);
			xxd_dsday(c);
			ds[i].Suaten(c);
		}
	if (found == 0) std::cout << "khong tim thay ";
}


void DsDay::Timkiem(char* ma) {
	int found = 0;
	for (int i = 1; i <= soluong; i++)
		if (strcmp(ds[i].Get_Maday(), ma) == 0) {
			found = 1;
			ds[i].inday();
		}
	if (found == 0) std::cout << "khong tim thay ";
}


void DsDay::Sapxep() {
	Day l;
	for (int i = 1; i <= soluong; i++)
		for (int j = i + 1; j <= soluong; j++) {
			if (strcmp(ds[i].Get_Maday(), ds[j].Get_Maday()) > 0) {
				l = ds[i];
				ds[i] = ds[j];
				ds[j] = l;
			}
		}
}


void DsDay::Xoa(char* m) {
	for (int i = 1; i <= soluong; i++) {
		if (strcmp(ds[i].Get_Maday(), m) == 0) {
			for (int j = i; j < soluong; j++)
				ds[j] = ds[j + 1];
			soluong--;
		}
	}
}
