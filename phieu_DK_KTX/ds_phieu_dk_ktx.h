#include "phieu_dk_ktx.h"

class ds_phieu_dk_ktx
{
private:
    int soluong;
    phieu_dk_ktx *danhsach;

public:
    ds_phieu_dk_ktx();
    ~ds_phieu_dk_ktx();

    void khoitao_ds_phieu(int);

    void input_file();
    void output_file();

    void nhap_ds_phieu();
    void in_ds_phieu();
};
