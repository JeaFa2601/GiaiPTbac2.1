// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>
int main()
{
    cout << "Giai Phuong Trinh Bac 2\n";
    float a, b, c, x1, x2;
    float delta;

    cout << "Nhap so A\n";
    cin >> a;
    cout << "Nhap so B\n";
    cin >> b;
    cout << "Nhap so C\n";
    cin >> c;
    delta = (b * b) - (4 * a * c);
    if (delta < 0)
        cout << "Phuong Trinh Vo Nghiem\n";
    else if (delta == 0)
        cout << "Phuong Trinh Co Nghiem Kep\n" << -b / 2 * a;
    else 
        cout << "Phuong Trinh Co 2 Nghiem Phan Biet\n";
        cout << "\nx1=" << (-b + sqrt(delta)) / (2 * a);
        cout << "\nx2=" << (-b - sqrt(delta)) / (2 * a);
    
    
}

