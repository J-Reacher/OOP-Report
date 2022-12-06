class phieu_dk_ktx
{
private:
	int stt;
	char *tg_lap;
	char *tg_o;
	int tienphong_theothang;

public:
	// Constructors
	phieu_dk_ktx();
	phieu_dk_ktx(char, char, char, int);

	// Destructor
	~phieu_dk_ktx();

	void xxd(char[]);
	int sothutu();

	void nhap_phieu();
	void in_phieu();

	int trave_stt();
	char *trave_tg_lap();
	char *trave_tg_o();
	int trave_tienphong();

	void datlai_thongtin_phieu(int a, char *b, char *c, int d);
};
