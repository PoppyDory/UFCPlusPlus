#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int piuGrande(int x, int y)
{
    int max;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    return max;
}

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double costoTotale(double prezzo, int interesse)
{
    interesse = prezzo * interesse / 100;
    return prezzo + interesse;
}

void buttaFuori(int eta)
{
    if (eta < 18)
    {
        cout << "Mi dispiace, sei troppo giovane per bere birra";
    }
    else
    {
        cout << "Cheers! Buon divertimento al bar!";
    }
}

void decrescente(int a, int b, int c)
{
    int min = a, med = a, max = a;
    if (b < min)
    {
        min = b;
    }
    else if (b > max)
    {
        max = b;
    }
    else
    {
        med = b;
    }

    if (c < min)
    {
        min = c;
    }
    else if (c > max)
    {
        max = c;
    }
    else
    {
        med = c;
    }
    cout << min << med << max;
}

void stampaNome(string nome)
{
    string riga = "";

    int lunghezza = nome.length();
    riga += "+-------";
    for (int i = 0; i <= lunghezza; i++)
    {
        riga += "-";
    }
    riga += "+ \n";
    cout << riga;
    cout << "|    " << nome << "    | \n";
    cout << riga;
}

void equazione(int a, int b, int c)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "l'equazione non ha soluzioni reali. " << endl;
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (+b + sqrt(delta)) / (2 * a);
        cout << "l'equazione ha due soluzioni x1 = " << x1 << "e x2 =" << x2 << endl;
    }
}

bool isBetween(int a, int b, int c)
{
    if (a < b && b < c)
    {
        cout << "b e' compreso tra a e c \n";
    }
    else
    {
        cout << "b non e' compreso tra a e c \n";
    }
    return 0;
}

bool bisestile(int anno)
{
    if (anno % 4 == 0 && anno & 100 != 0 || anno % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void stampaTabelline(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << n * i << "\n";
    }
}

void stampaTabelline(int n, int m)
{
    for (int i = 0; i <= m; i++)
    {
        cout << n * i << "\n";
    }
}

void stampaPari(int quanti)
{
    for (int i = 0; i <= quanti; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }
}

int main()
{
    cout << piuGrande(4, 6) << endl;

    cout << isEven(6) << endl;

    cout << costoTotale(100, 5) << endl;

    buttaFuori(20);
    cout << endl;

    cout << "Stampa tutti i numeri pari" << endl;
    stampaPari(20);

    cout << "Tabellina" << endl;
    stampaTabelline(7);

    cout << "Tabellina n * m" << endl;
    stampaTabelline(7, 11);

    cout << "anno bisetile" << endl;
    cout << bisestile(2000);

    cout << isBetween(4, 2, 0) << endl;

    equazione(2, -3, 4);

    stampaNome("Rosita");

    decrescente(8, 6, 7);
}