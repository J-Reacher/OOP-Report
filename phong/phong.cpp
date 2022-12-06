#include <iostream>
#include <string.h>
#include "phong.h"
using namespace std;
//hàm hủy, xây dựng có tham số, xây dựng sao chép
phong::phong() {
}
phong::~phong() {
}
phong::phong(char maday, char maphong, char tenphong, int batbuoc, int songuoi) {
	maday = maday;
	maphong = maphong;
	tenphong = tenphong;
	batbuoc = batbuoc;
	songuoi = songuoi;
}
phong::phong(const phong& phong) {
}
//xóa xuống dòng
void phong::xxd_phong(char x[]) {
	int len = strlen(x);
	if (x[len - 1] == '\n')
		x[len - 1] = '\0';
}
//nhập phòng
void phong::Nhapphong() {
	cout << "Nhap ma phong: ";
	maphong = new char[10];
	fgets(maphong, 10, stdin);
	xxd_phong(maphong);

	cout << "Nhap ma day: ";
	maday = new char[20];
	fgets(maday, 20, stdin);
	xxd_phong(maday);

	cout << "Nhap ten phong: ";
	tenphong = new char[30];
	fgets(tenphong, 30, stdin);
	xxd_phong(tenphong);

	cout << "Nhap so nguoi bat buoc: ";
	cin >> batbuoc;
	cin.ignore();

	cout << "Nhap so nguoi dang o: ";
	cin >> songuoi;
	cin.ignore();
}
//in phòng
void phong::Inphong() {
	cout << maphong << "\t\t\t" << maday << "\t\t\t" << tenphong << "\t\t\t" << batbuoc << "\t\t\t" << songuoi << "\t\t\t" << Get_hieu() << "\t\t\t" << Trong() << "\t\t\t", Ketqua();
}
int phong::Trong() {
	return (batbuoc - songuoi);
}
char* phong::Get_maphong() {
	return maphong;
}
char* phong::Get_maday() {
	return maday;
}
char* phong::Get_tenphong() {
	return tenphong;
}
int  phong:: Get_soluong(){
	return songuoi;
}
int phong::Get_hieu() {
	return (batbuoc - songuoi);

}
//kết quả
void phong::Ketqua() {
	int n = Trong();
	if (n <= 8)
		cout << "Du\n";
	else
		cout << "Khong du\n";
}

//sửa lại
void phong::Sualaiphong(char* x, int a, int b) {
	tenphong = x;
	batbuoc = a;
	songuoi = b;
}