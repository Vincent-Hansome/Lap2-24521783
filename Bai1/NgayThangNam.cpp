#include "NgayThangNam.h"
#include <iostream>

using namespace std;

bool NgayThangNam::Hople() const
{
    if (iThang < 1 || iThang > 12)
        return false;
    if (iNgay < 1 || iNgay > 31)
        return false;
    if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)
    {
        if (iNgay > 30)
            return false;
    }
    if (iThang == 2)
    {
        if (iNam % 4 == 0 && (iNam % 100 != 0 || iNam % 400 == 0))
        {
            if (iNgay > 29)
                return false;
        }
        else
        {
            if (iNgay > 28)
                return false;
        }
    }
    return true;
}

void NgayThangNam::Nhap()
{
    cout << "Nhap ngay: ";
    cin >> iNgay;
    cout << "Nhap thang: ";
    cin >> iThang;
    cout << "Nhap nam: ";
    cin >> iNam;
}

void NgayThangNam::Xuat() const
{
    cout << iNgay << "/" << iThang << "/" << iNam;
}

istream& operator>>(istream& is, NgayThangNam& d)
{
    d.Nhap();
    return is;
}

ostream& operator<<(ostream& os, const NgayThangNam& d)
{
    d.Xuat();
    return os;
}

NgayThangNam NgayThangNam::NgayThangNamTiepTheo()
{
    iNgay++;
    if (!this->Hople())
    {
        iNgay = 1;
        iThang++;
        if (iThang > 12)
        {
            iThang = 1;
            iNam++;
        }
    }
    return *this;
}
