#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
//calcola il più grane tra due numeri
//input: due numeri inetri, x e y
//output: il più grande tra i due
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
//calcola se un numero è pari o dipari
// input: un numero intero
//output: vero o falso (1 o 0)
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
//dato prezzo e interesse, calcola prezzo totale
//input: interesse e prezzo
//output: prezzo totale (prezzo+interesse)
double costoTotale(double prezzo, int interesse)
{
    interesse = prezzo * interesse / 100;
    return prezzo + interesse;
}
//stampa se puoi entrare nel bar per bere
//input: età
//output: stampa stringa
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
//stampa tre numeri in ordine decrscente
//input: tre numeri interi
//output: stampa i numeri in ordine dercescente
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
    cout << min<<" " << med<< " " << max;
}
//scrivi il nome all'interno di un rettangolo
//input: stringa con nome
//output: rettangolo formattato con nome dentro
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
//risolvi un equazione di secondo grado
//input:tre nuemri interi
//output: stampa soluzione dell'equazione , se è risolvibile
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
//dati tre numeri, stampa se quello nel centro è compreso o no
//input: tre numeri interi
//output: vero o falso
bool isBetween(int a, int b, int c)
{
    if (a < b && b < c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//stampa se un anno è bisestile o no 
//input: inserisci un anno
//output: vero o falso
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
//stampa tabellina di un numero per 10
//input: inserisci un numero 
//output: stampa la tabellina di n*10
void stampaTabelline(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << n * i << " ";
    }
}
//stampa la tabellina scegliendo due numeri
//input: inserisco due numeri
//output: stampa la tabellina fino a m
void stampaTabelline(int n, int m)
{
    for (int i = 0; i <= m; i++)
    {
        cout << n * i << " ";
    }
}
//stampa tutti i numeri pari fino a n
//input: inserisci un numero
//output: stampa tutti i numeri pari fino a n
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
    cout << "Il numero piu grande e': "<< piuGrande(4, 6) << endl;
    
    cout << "Il numero e' pari o dispari? ";
    if (isEven(6) ==1)
    {
        cout<<"pari";
    }
    else 
    {
        cout<<"dispari";
    }
    cout<<" "<<endl;
    cout<< "il costo totale e': ";
    cout << costoTotale(100, 5) << endl;

    buttaFuori(20);
    cout << endl;

    cout << "Stampa tutti i numeri pari" << endl;
    stampaPari(20);

    cout << "Tabellina n*10" << endl;
    stampaTabelline(7);
    cout<<endl;

    cout << "Tabellina n * m" << endl;
    stampaTabelline(7, 11);
    cout<<endl;

    if (bisestile(2000) ==1)
    {
        cout << "Bisestile";
    }
    else 
    {
        cout<< "Non e' bisestile";
    }
    cout<< " "<<endl;
    
    if (isBetween(4, 2, 0)==1)
    {
        cout << "b e' compreso tra a e c \n";
    }
    else
    {
        cout << "b non e' compreso tra a e c \n";
    }

    cout<<" "<<endl;
    equazione(2, -3, 4);

    stampaNome("Rosita");

    cout<< "L'ordine decrescente dei nuemri e' "<<endl;
    decrescente(8, 6, 7);
}