#include <iostream>
#include <string>

using namespace std;


bool cercaCarattere (string parola, char carattere)
{
    int i =0;
    while(i<parola.length()) //scorro la parola
    {
        if(parola[i] == carattere) //se trovo il carattere nella parola ritorna vero
        {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{
    cout<< cercaCarattere ("Gatto", 'o' );
}
