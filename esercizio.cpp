//scivere un programma che riceve in input numeri interi non nulli
//0 per terminare, stampa se ogni numero ha anche il sto valore opposto
//

#include <iostream>
#include <array>

using namespace std;

int main ()
{
    int array[100];
    int i;
    
    cout <<"inserisci gli elementi: ";
    cin>>array[0];
    for( int i=0; (i<100 && array[i]!=0); i++) //inserisco i numeri fino a 100 o finchè non inserisco zero
    {
        cin >> array[i+1];
    }
    int max=0;
    max=i; //ultimo valure utile (no zero o 99)
    bool output=false;
    bool opposto;
    for (int i=0; i<max;i++)
    {  
        if (opposto=true)
        {
            output=opposto;
        }
        else 
        {
            output =false;
            break;
        }
        for (int j =i+1; j<max; j++)
        {
            if (array[i]==(array[j]*-1))
            {
                opposto=true;
                break; //se ho trovato l'opposto esco dal ciclo di j
            }
        }
    }

    if( output==true)
    {
        cout << " ci sono tutti gli opposti";
    }
    else 
    {
        cout<<" non ci sono tutte le coppie di opposti";
    }
}