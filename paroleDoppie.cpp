// Fai inserire parole all’utente (0 per terminare).
// Stampa vero o falso se almeno una parola contiene doppie

#include <iostream>
#include <string>

using namespace std;

bool cisonodoppie(string parola)
{
    int i = 0;
    while (i<parola.length())
    {
        if (parola[i] == parola[i + 1])
        {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{
    string parola;
    cout << "inserisci parole: "<<endl;
    cin >> parola;
    cisonodoppie (parola);
}