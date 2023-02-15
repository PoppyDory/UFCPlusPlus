// input: numero positivo N
// output: max k =somma( 1+ 2+ 3...k) <=n
#include <iostream>
#include <string>

using namespace std;

int enigma(int n)
{
    int k = 1, somma = 1;
    while (somma <= n) // uso while perchè non ho una condizione definita
    {
        k++;
        somma += k; // sommo il k successivo alla somma precedente
    }
    return k - 1; // torna al k precedente se sommak>n
}


int main()
{
    cout << enigma(20);

    return 0;
}