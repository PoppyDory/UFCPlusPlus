#include <iostream>
#include <string>

using namespace std;

int main() 
{
     string nome;

    cout<<"Come ti chiami?\n";
    cin >> nome; 

    {
        cout <<"+------------+ \n";
        cout <<"|   " << nome << "   | \n";
        cout <<"+------------+";
    }
}