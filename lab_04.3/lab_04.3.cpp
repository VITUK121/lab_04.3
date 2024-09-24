#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{    
    double F, x, xp, xk, dx, a, b, c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a, b, c = "; cin >> a >> b >> c;

    cout << fixed;
    cout << "------------\n";
    cout << "|" << setw(4) << "F" << setw(5) << "|\n";
    cout << "------------\n";

    x = xp;

    for (; x <= xk; x += dx) {

        if (c < 0 && a != 0) {
            F = -a * x * x;
        }
        if (c > 0 && a == 0) {
            F = (a - x) / (c * x);
        }
        if (!(c < 0 && a != 0) && !(c > 0 && a == 0)) {
            F = x / c;
        }

        cout << F << "|" << endl;
    }
    cout << "------------\n";
    system("pause");
}