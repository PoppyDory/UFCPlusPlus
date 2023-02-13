//esercizio 1

#include <iostream>
#include <string>

int main()
{
    int numero=0;
    int valore=numero%2;
    
    std::cout <<"inserisci un numero:";
    std::cin >>numero;
    
    std::cout <<valore;
    if (valore==0) {
        std::cout <<"pari";
    }
    else {  //nel else non devo mettere la variabile
        std::cout << "dispari";
    }
}