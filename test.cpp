#include <iostream>
#include <string>
using namespace std;
struct DMY{
	int ngay,thang,nam;
};
struct MonHoc{
	string tenMH;
	float Diem[5]; //3 phan tu dau cua mang la diem he so 1, phan tu thu 4 la he so 2, phan tu thu 5 la he so 3
};
struct HocSinh{
	string tenHS;
	int tuoi;
	DMY NgaySinhHS;
	string DiaChi;
	string GiamHo;
	string sdt;		//sdt cua nguoi giam ho
	MonHoc DiemSo[7]; //gia thiet hoc sinh hoc tat ca 7 mon o tat ca cac khoi
};
typedef HocSinh *DSHS;
typedef HocSinh *PnodeHS;
struct lop{
	string TenLop;
	string TKB[5][7]; //TKB co dinh cho tat ca hoc sinh trong mot lop trong ca nam hoc
	int QuyLop;
	lop *Lnext;	//con tro tro toi node 'lop' ke tiep trong ds lien ket
	DSHS DanhSachHS;	//con tro dai dien cho danh sach 'hoc sinh' cua lop do
};

struct CanBo{
	string tenCB;
	DMY NgaySinhCB;
	string ChucVu;
	string sdtCB;
};
typedef lop *DSlop;
typedef lop *PnodeL;

typedef CanBo *DSCB;
typedef CanBo *PnodeCB;
void initDSlop(DSlop &DS){
	DS = NULL;
}
void initDSHS(DSHS &DS){
	DS = NULL;
}
void initCB(DSCB &DS){
	DS = NULL;
}
int main(){
	return 0;
}
