// Lab_03_4.cpp
// Бухарінов Максим Сергійович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, R; // вхідні дані
    
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження (повна форма)
    if ((y <= sqrt(R * R - x * x) && y >= 0 && x <= 0) || (y >= -2 * x && y >= (2*x - 2*R) && y <= 0))
        cout << "yes =)" << endl;
    else cout << "no =(" << endl;

    return 0;
}
