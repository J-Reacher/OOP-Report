class phong {
private:
	char* maphong;
	char* maday;
	char* tenphong;
	int batbuoc;
	int songuoi;
public:
	phong(); //ham khoi tao, ham xay dung
	phong(char, char, char, int, int); //ham khoi tao co tham so
	~phong(); // ham huy, ham xoa
	phong(const phong& ph); //ham xay dung sao chep
	
	void xxd_phong(char[]);
	void Nhapphong();
	void Inphong();
	char* Get_maphong();
	char* Get_maday();
	char* Get_tenphong();
	int Get_hieu();
	int Get_soluong();
	int Trong();
	void Ketqua();
	void Sualaiphong(char*, int, int);
};