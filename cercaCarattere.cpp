#include <iostream>
#include <string>

using namespace std;


bool cercaCarattere (string parola, char carattere)
{
    int i =0;
    while(i<parola.length())
    {
        if(parola[i] == carattere)
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
