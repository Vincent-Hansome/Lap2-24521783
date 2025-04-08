#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc(double real, double imag) : iThuc(real), iAo(imag) {}

void SoPhuc::Nhap() {
    cout << "Enter real part: ";
    cin >> iThuc;
    cout << "Enter imaginary part: ";
    cin >> iAo;
}

void SoPhuc::Xuat() const {
    cout << iThuc << " + " << iAo << "i" << endl;
}

SoPhuc SoPhuc::Tong(const SoPhuc& other) const {
    return SoPhuc(iThuc + other.iThuc, iAo + other.iAo);
}

SoPhuc SoPhuc::Hieu(const SoPhuc& other) const {
    return SoPhuc(iThuc - other.iThuc, iAo - other.iAo);
}

SoPhuc SoPhuc::Tich(const SoPhuc& other) const {
    return SoPhuc(iThuc * other.iThuc - iAo * other.iAo, iThuc * other.iAo + iAo * other.iThuc);
}

SoPhuc SoPhuc::Thuong(const SoPhuc& other) const {
    double denominator = other.iThuc * other.iThuc + other.iAo * other.iAo;
    return SoPhuc((iThuc * other.iThuc + iAo * other.iAo) / denominator, (iAo * other.iThuc - iThuc * other.iAo) / denominator);
}
