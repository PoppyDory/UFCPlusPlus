// Fai inserire all’utente da tastiera 10 parole.
// Stampa la più grande
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string p;
    string p1;
    cout << "inserisci 10 parole: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> p;

        if (p.length() > p1.length())
        {
            p1 = p;
        }
    }

    cout << "la parola piu' lunga e': " << p1 << endl;
    return 0;
}