#include "Day.h"
class DsDay {
private:
	int soluong;
	Day* ds;
public:
	DsDay();
	~DsDay();

	void Khoitaodsday(int);
	void Nhapdsday();
	void Indsday();
	void Themday();
	void Suatenday(char* ma);
	void Timkiem(char* ma);
	void Sapxep();
	void Xoa(char* ma);
};
