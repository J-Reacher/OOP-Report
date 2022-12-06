class SV
{
private:
	char *masv;
	char *tensv;
	char *ngaysinh;
	char *quequan;

public:
	SV();						// ham khoi tao
	SV(char, char, char, char); // ham khoi tao co tham so
	~SV();
	SV(const SV &ph); // ham xay dung sao chep

	void xoaxuongdong(char[]);
	void Nhapsv();
	void Insv();
	char *Get_masv();
	char *Get_tensv();
	char *Get_ngaysinh();
	char *Get_quequan();
	void Sualai(char *, char *, char *);
	void Sualai1(char* x);
};