//Scrivi un programma in C++ che chieda all'utente di inserire 10 numeri e determini il numero più grande tra questi.
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int numero=0;
    int maggiore=0;

    cout<< "inserisci 10 numeri: "<<endl;

    for  (int i=0; i<10;i++)
    {
        cin>> numero;
        if (numero>maggiore)
        {
            maggiore=numero;
        }
    }
    
    cout<< "Il numero maggiore e': "<< maggiore;

}