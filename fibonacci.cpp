#include <string>
#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21
// es fibonacci(5)  -> 0 1 1 2 3
//                         1+2=3
//  fibonacci(3) -> 0 1 1
//  fibonacci(2) -> 0 1
// fibonacci(1) -> 0

void fibonacci(int quanti)
{
    string risultato = "";

    if (quanti == 0)
    {
        risultato = "";
    }
    else if (quanti == 1)
    {
        risultato = "0";
    }
    else if(quanti==2){
        risultato = "0, 1";
    }
    else //per tutti gli altri numeri
    {
        int valore;
        int a=0;
        int b=1;
        risultato="0, 1, "; //parte fissa
        
        for (int i=2; i<quanti; i++)//entro nel ciclo, parto da 2 perchè 0 e 1 ci sono sempre 
        {
            valore = a+b;
            risultato+= to_string(valore) + ", ";
            a=b;
            b=valore;
        }



    }


    cout<<risultato << endl;
}

int main()
{
    fibonacci(1);
    fibonacci(2);
    fibonacci(3);
    fibonacci(4);

    return 0;
}