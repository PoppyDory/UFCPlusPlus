#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//creo una funzione che mi identifica un anno bisestile
bool isBisestile(int anno){
    if(anno%4==0 && anno&100!=0 || anno %400==0){
        return true;
    }
    else{
        return false;
    }
}
//uso la funzione creata sopra in un calcolo
int main() 
{
    isBisestile(2000);

    if(isBisestile(2000))
    {
        cout<< "anno bisestile\n";
    }
    else
    {
        cout<<"anno non bisestile \n";
    }

    return 0;
}
