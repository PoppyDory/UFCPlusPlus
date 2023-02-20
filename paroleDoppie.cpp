#include <iostream>
#include <string>

using namespace std;

bool ciSonoDoppie(string parola)
{
    int i = 0;
    while (i < parola.length())
    {
        if (parola[i] == parola[i + 1])
        {
            return true;
        }
        i++;
    }
    return false;
}

bool ciSonoLettereDoppie() // stesso nome della funzione sopra ma senza parametri
{
    string parola;
    bool noDoppie = true;
    do
    {
        cout << "Inserisci parola: " << endl;
        cin >> parola;
        if (ciSonoDoppie(parola))
        {
            noDoppie = false;
        }
    } while (parola != "0" && noDoppie) ;
    return !noDoppie;  //se ci sono doppie noDoppie è falso, i ciclo si ferma
}

int main()
{   
    cout<< ciSonoLettereDoppie() ;
}