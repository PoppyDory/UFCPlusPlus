#include <iostream>
#include <string>

using namespace std;

bool cisonodoppie(string parola)
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

int main()
{
    if (cisonodoppie("papa"))
    {
        cout<<"Ci sono doppie. ";
    }
    else 
    {
        cout<<"Non ci sono doppie. ";
    }
}
