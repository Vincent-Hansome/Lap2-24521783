#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc {
private:
    double iThuc; 
    double iAo;   

public:
    SoPhuc(double real = 0, double imag = 0);

    void Nhap();

    void Xuat() const;

    SoPhuc Tong(const SoPhuc& other) const;

    SoPhuc Hieu(const SoPhuc& other) const;

    SoPhuc Tich(const SoPhuc& other) const;

    SoPhuc Thuong(const SoPhuc& other) const;
};

#endif

