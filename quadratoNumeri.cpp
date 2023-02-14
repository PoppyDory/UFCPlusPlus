// scrivi un programma che calcoli e stampi la somma dei quadrati dei primi 10 numeri naturali.
#include <iostream>
#include <cmath>

using namespace std;

int sommaQuadrati(int x)
{
     int numero = 0;
    for (int i = 0; i <= x; i++)
    {
        numero += i * i;
    }
    return numero;
}

int main()
{
    cout << sommaQuadrati(10);
}