#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;
    double delta;

    cout << " inserisci tre numeri: \n";
    cin >> a;
    cin >> b;
    cin >> c;

    delta = ((b * b) - 4 * (a * c));

    if (delta < 0)
    {
        cout << " non esistono soluzioni reali ";
    }
    else if (delta == 0)
    {
        cout << "esiste una sola soluzione: " << (-b / 2 * a);
    }
    else
    {
        x1 = (-b + sqrt(delta) / (2 * a));
        x2 = (-b - sqrt(delta) / (2 * a));
        cout << "la prima soluzione e': " << x1;
        cout << "la seconda soluzione e': " << x2;
    }
    return 0;
}