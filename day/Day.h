class Day {
private:
	char* Maday;
	char* Tenday;
public:
	Day(); //ham khoi tao
    Day(char, char); //ham khoi tao co tham so
	~Day();
	Day(const Day& D);

	void khoitaoday();
	
	void xxd_day(char[]);
	void nhapday();
	void inday();
	char* Get_Maday();
	char* Get_Tenday();
	void Suaten(char* a);
};
