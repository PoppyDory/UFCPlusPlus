#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    string riga = "";
    cout << "Come ti chiami?\n";
    cin >> nome;

    int lunghezza = nome.length();

    // riga1
    riga += "+-------";
    for (int i = 0; i <= lunghezza; i++)
    {
        riga += "-";
    }
    riga += "+ \n";

    cout << riga;

    // riga2
    cout << "|    " << nome << "    | \n";

    // riga3 uguale riga1
    cout << riga;

    /*
    cout << "+--------+ \n";
    cout << "|        | \n";
    cout << "+--------+";

    cout << "+---------+ \n"; // ho aggiunto  un trattino
    cout << "|    p    | \n"; // divido gli spazzi (4 e 4)
    cout << "+---------+"; //aggiungo un trattino

    cout << "+--------------+ \n";
    cout << "|    Marius    | \n";
    cout << "+--------------+";
    */

    return 0;
}