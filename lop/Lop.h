class lop {
public:
	char* malop;
	char* tenlop;
	char* chuyennganhdaotao;
	char* khoahoc;
	char* covanhoctap;
	int tongso;
public:
	lop(); //ham khoi tao
	lop(char, char, char, char, char, int); //ham khoi tao co tham so
	~lop();
	lop(const lop& ph); //ham xay dung sao chep

	void xxd_lop(char[]);
	void Nhaplop();
	void Inlop();
	char* Get_malop();
	char* Get_tenlop();
	char* Get_chuyennghanhdaotao();
	char* Get_khoahoc();
	char* Get_covanhoctap();
	int Tong();
	void Ketqua();
	void Sualai(char*, int);
};