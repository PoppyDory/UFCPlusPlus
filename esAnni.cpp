//esercizio 3

#include <iostream>
#include <string>

int main()
{
    int anni=0;
  std::cout << "Quanti anni hai?";
  std::cin >> anni;
  
  if (anni< 18)
  {
      std::cout<<"Mi dispiace, sei troppo giovane per bere birra";
  }
  else 
  {
      std::cout<< "Cheers! Buon divertimento al bar!";
  }
}