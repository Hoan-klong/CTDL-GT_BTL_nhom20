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
	DMY NgaySinhHS;
	string DiaChi;
	string GiamHo;
	string sdt;		//sdt cua nguoi giam ho
	MonHoc DiemSo[7]; //gia thiet hoc sinh hoc tat ca 7 mon o tat ca cac khoi
	HocSinh *HSnext;
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
	CanBo *CBnext;
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
void insertHS(DSHS &DS, string name, int day, int month, int year, string address, string guard, string PhoneNumber){
	PnodeHS Q = new HocSinh;
	Q->tenHS = name;
	Q->NgaySinhHS.ngay = day;
	Q->NgaySinhHS.thang = month;
	Q->NgaySinhHS.nam = year;
	Q->DiaChi = address;
	Q->GiamHo = guard;
	Q->sdt = PhoneNumber;
	if(DS == NULL){
		Q->HSnext = NULL;
		DS = Q;
	} else {
		Q->HSnext = DS;
		DS = Q;
	}
}
void insertLop(DSlop &DS, string str1, string str2[5][7], int n){
	PnodeL Q = new lop;
	Q->TenLop = str1;
	Q->QuyLop = n;
	initDSHS(DS->DanhSachHS);
	for(int i = 0; i< 5; i++){
		for(int j = 0; j < 7; j++){
			Q->TKB[i][j] = str2[i][j];
		}
	}
	if(DS == NULL){
		Q->Lnext = NULL;
		DS = Q;
	} else {
		Q->Lnext = DS;
		DS = Q;
	}
}
void insertCB(DSCB &DS, string name, int day, int month, int year, string position,string PhoneNum){
	PnodeCB Q = new CanBo;
	Q->tenCB = name;
	Q->NgaySinhCB.ngay = day;
	Q->NgaySinhCB.thang = month;
	Q->NgaySinhCB.nam = year;
	Q->ChucVu = position;
	Q->sdtCB = PhoneNum;
	if(DS == NULL){
		Q->CBnext = NULL;
		DS = Q;
	} else {
		Q->CBnext = DS;
		DS = Q;
	}
}
int main(){
	return 0;
}
