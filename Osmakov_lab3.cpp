#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, n, x, prev_x;
    double epsilon = 0.000001;

    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть степінь n: ";
    cin >> n;
    
    x = a / n;

    do {
        prev_x = x;
        x = ((n - 1) * x + a / pow(x, n - 1)) / n;
    } while (fabs(x - prev_x) > epsilon);

    cout << "Корінь " << n << "-го степеня з числа " << a << " дорівнює " << x << endl;

    return 0;
}
