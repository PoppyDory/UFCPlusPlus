//esercizio 1

#include <iostream>
#include <string>

int main()
{
    double prezzo;
    int rate;
    
    std::cout << "Prezzo \n ";
    std::cin >> prezzo;
  
   std::cout<<"In quante rate? \n ";
   std::cin>> rate;
   
   double rataSing = prezzo/rate;
   double rataInt = rataSing + rataSing*0.05;
   double costoFin = rataInt*rate;
   
   std::cout<<"Le tue rate hanno un costo di \n ";
   std::cout <<rataInt;
   
   std::cout<< " Il prezzo finale sara' \n ";
   std::cout << costoFin;
   
}