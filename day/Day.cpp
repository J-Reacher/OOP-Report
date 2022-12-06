#include<iostream>
#include <cstring>
#include "Day.h"


Day::Day() {}
Day::~Day() {}



Day::Day(const Day& D) {}


void Day::xxd_day(char x[]) {
	size_t len = strlen(x);
	if ( x[len - 1] == '\n') {
		 x[len - 1] = '\0';
	}
}


void Day::nhapday() {
	std::cout << "Nhap vao ma day:";
	Maday = new char [50]; fflush(stdin);
	fgets(Maday, sizeof(Maday), stdin); xxd_day(Maday);

	std::cout << " Nhap vao ten day:";
	Tenday = new char [50]; fflush(stdin);
	fgets(Tenday, sizeof(Tenday), stdin); xxd_day(Tenday);
}


void Day::inday() {
	std::cout << " Ma day la:" << Maday << std::endl;
	std::cout << "Ten day la:" << Tenday << std::endl;
}


char* Day::Get_Maday() {return Maday;}
char* Day::Get_Tenday() {return Tenday;}


void Day::Suaten(char* a) {Tenday = a;}
