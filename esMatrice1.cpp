#include <iostream>
#include <random>
using namespace std;

int main()
{
    int n=0;

    int matrice [n][n];
    cout<< "inserisci righe: "<< endl;
    while (n >= 10)
    {
        cin>> n;
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            matrice[i][j]= 5 ;
        }
    }
int somma [n];
    for  (int i=0; i<n; i++ )
    {   
        somma[n]=0;
        for (int j=0; j<n; j++)
        {
           somma[i]+=matrice [i][j]; 
        }
    }
    int k=0;
    cout<<" inserisci l'indice della colonna da sommare: "<< endl;
    cin>> k;
    while(k>n)
    {
        cin>>k;
    }
int sommaK=0;
bool diversi=false;
    for (int i =0; i<n; i++)
    {
        sommaK+= matrice[i][k];
    }
    for(int i=0; i<n; i++)
    {
        if (sommaK == somma[i])
        {
            diversi;
        }
        else
        {
            diversi=true;
        }
    }

    if(diversi==0)
    {
        cout<< "le somme non sono diverse. "<<endl;
    }
    else 
    {
        cout<<" sono tutte diverse. ";
    }

}
