// main.cpp
#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main() {
    SoPhuc c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.Nhap();
    cout << "Enter second complex number:" << endl;
    c2.Nhap();

    cout << "First complex number: ";
    c1.Xuat();
    cout << "Second complex number: ";
    c2.Xuat();

    result = c1.Tong(c2);
    cout << "Sum: ";
    result.Xuat();

    result = c1.Hieu(c2);
    cout << "Difference: ";
    result.Xuat();

    result = c1.Tich(c2);
    cout << "Product: ";
    result.Xuat();

    result = c1.Thuong(c2);
    cout << "Quotient: ";
    result.Xuat();

    return 0;
}
