//scrivere un programma che riceve in ingresso es 3
#include <iostream>
#include <array>

using namespace std;

void riempi(int array[], int lunghezza)
{
    int input=0;
    int i=0;
    while (input!= -1000 && 1<99)
    {
        cin >> input;
        array[i]=input;
        i++;
    }
    if(i==99)
    {
        array[i] = -1000; //se non ho mai inserito -1000 e ho inserito i 100 numeri, l'ultimo è sempre -1000
    }
}

int conta (int numero, int array[])
{
    int x=0;
    int cont =0;
    while ( array [x]!=-1000)
    {
        if (array[x]==numero)
        {
            cont++;
        }
        x++;
    }
    return cont;
}

int main ()
{
    int array1[100];
    int array2[100];
    cout<< "inserisci i numeri "<<endl;
    riempi(array1,100);
    cout<< "inserisci i numeri "<<endl;
    riempi (array2,100);
    
    int i = 0;
    
    while (array1[i] != -1000)
    {
        cout << array1[i] << " e' presente "<< conta (array1[i], array2)<< " volte. "<<endl;
        i++;
    }
}