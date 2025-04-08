#include "PhanSo.h"

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    int res = min(a, b);
    if (a == 0 || b == 0) return a == b ? 1 : a + b;
    while (res > 1) {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
}

PhanSo PhanSo::Tong(const PhanSo& other) {
    PhanSo result;
    result.iTu = iTu * other.iMau + iMau * other.iTu;
    result.iMau = iMau * other.iMau;
    return result;
}

PhanSo PhanSo::Hieu(const PhanSo& other) {
    PhanSo result;
    result.iTu = iTu * other.iMau - iMau * other.iTu;
    result.iMau = iMau * other.iMau;
    return result;
}

PhanSo PhanSo::Tich(const PhanSo& other) {
    PhanSo result;
    result.iTu = iTu * other.iTu;
    result.iMau = iMau * other.iMau;
    return result;
}

PhanSo PhanSo::Thuong(const PhanSo& other) {
    if (other.iTu == 0) {
        cout << "Khong ton tai thuong";
        return PhanSo();
    }
    PhanSo result;
    result.iTu = iTu * other.iMau;
    result.iMau = iMau * other.iTu;
    return result;
}

void PhanSo::RutGon() {
    int u = gcd(iTu, iMau);
    iTu /= u;
    iMau /= u;
}

void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> iTu;
    do {
        cout << "Nhap mau so: ";
        cin >> iMau;
    } while (!iMau);
}

void PhanSo::Xuat() const {
    int u = gcd(iTu, iMau);
    int t = iTu / u;
    int m = iMau / u;
    if (iMau < 0) {
        t *= -1;
        m *= -1;
    }
    cout << t << "/" << m;
}
string PhanSo::SoSanh(const PhanSo& other) const {
    if (iTu * other.iMau > iMau * other.iTu)
        return to_string(iTu) + "/" + to_string(iMau) + " > " + to_string(other.iTu) + "/" + to_string(other.iMau);
    else if (iTu * other.iMau < iMau * other.iTu)
        return to_string(iTu) + "/" + to_string(iMau) + " < " + to_string(other.iTu) + "/" + to_string(other.iMau);
	else if (iTu * other.iMau == iMau * other.iTu)
        return to_string(iTu) + "/" + to_string(iMau) + " = " + to_string(other.iTu) + "/" + to_string(other.iMau);
}

bool PhanSo::operator==(const PhanSo& other) const {
    return (double)iTu / iMau == (double)other.iTu / other.iMau;
}

bool PhanSo::operator>(const PhanSo& other) const {
    return (double)iTu / iMau > (double)other.iTu / other.iMau;
}

bool PhanSo::operator<(const PhanSo& other) const {
    return (double)iTu / iMau < (double)other.iTu / other.iMau;
}

istream& operator>>(istream& is, PhanSo& ps) {
    ps.Nhap();
    return is;
}

ostream& operator<<(ostream& os, const PhanSo& ps) {
    ps.Xuat();
    return os;
}