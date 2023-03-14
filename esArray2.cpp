#include <iostream>
#include <array>

using namespace std;

bool assente (int numero, int array[], int lunghezza)
{
    for ( int i =0; i<lunghezza; i++)
    {
        if (array[i]==numero)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Quanto lo vuoi lungo l'array?" << endl;
    int lungo;
    int lungo2;
    cin >> lungo;
    cout << "Quanto lo vuoi lungo il secondo array?" << endl;
    cin>>lungo2;
    int array[lungo];
    int array2[lungo2];
    cout << "inserisci gli elementi del primo array: " << endl;
    for (int i = 0; i < lungo; i++)
    {
        cin >> array[i];
    }
    cout << "inserisci gli elementi del secondo2 array: " << endl;
    for(int i=0; i<lungo2; i++)
    {
        cin>>array2[i];
    }
    cout<<" gli elementi mancanti sono: ";
    for (int i =0; i<lungo2; i++)
    {
        if (assente(array2[i],array,lungo))
        {   
            cout <<array2[i]<< " ";
        }
    }
}
