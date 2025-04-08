#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

class PhanSo
{
private:
    int iTu;
    int iMau;
public:
    PhanSo(int t = 0, int m = 1) : iTu(t), iMau(m) {}
    PhanSo(const PhanSo& other) : iTu(other.iTu), iMau(other.iMau) {}
    PhanSo Tong(const PhanSo& );
    PhanSo operator+(const PhanSo& other) {
        return this->Tong(other);
    }
    PhanSo Hieu(const PhanSo& );
    PhanSo operator-(const PhanSo& other) {
        return this->Hieu(other);
    }
    PhanSo Tich(const PhanSo& );
    PhanSo operator*(const PhanSo& other) {
        return this->Tich(other);
    }
    PhanSo Thuong(const PhanSo& );
    PhanSo operator/(const PhanSo& other) {
        return this->Thuong(other);
    }
    void Nhap();
    void Xuat() const;
    void RutGon();
    friend istream& operator>>(istream&, PhanSo&);
    friend ostream& operator<<(ostream&, const PhanSo&);
    string SoSanh(const PhanSo& ) const;
    bool operator==(const PhanSo& ) const;
    bool operator>(const PhanSo& ) const;
    bool operator<(const PhanSo& ) const;
};
