#pragma once
#include <iostream>
using namespace std;
class NgayThangNam
{
private:
	int iNgay;
	int iThang;
	int iNam;
public:
    NgayThangNam() :iNgay(1), iThang(1), iNam(1900) {}
	NgayThangNam(const NgayThangNam& other) {
		iNgay = other.iNgay;
		iThang = other.iThang;
		iNam = other.iNam;
	}   
	NgayThangNam(int i, int j, int k) {
		if (this->Hople()) {
			iNgay = i;
			iThang = j;
			iNam = k;
		}
		else {
			iNgay = 1;
			iThang = 1;
			iNam = 1900;
		}
	}
	bool Hople() const;
	void Nhap();
	void Xuat() const;
	friend istream& operator>>(istream& is, NgayThangNam&);
	friend ostream& operator<<(ostream& os, const NgayThangNam&);
	NgayThangNam NgayThangNamTiepTheo();
};
