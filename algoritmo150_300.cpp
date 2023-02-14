// Scrivere un algoritmo che visualizza in ordine decrescente i numeri naturali da 300 a 150
#include <iostream>
#include <cmath>

using namespace std;

int decrescente(int x, int y)
{
    int i;
    for (i = x; i >=y; i--)
    {
        cout << i << endl;
    }
}

int main ()
{
   cout<< decrescente(300,150);
}