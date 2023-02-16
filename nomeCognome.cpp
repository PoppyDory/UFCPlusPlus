#include <iostream>
#include <string>

using namespace std;

string faiCiao(string nome, string cognome)
{
    string saluto = "Ciao, " + nome+ " "+ cognome + " ^.^ ";
    return saluto;
}

int main()
{
    string name;
    string surname;
    cout<<"Come ti chiami? "<<endl;
    cin>>name;
    cin>>surname;
    cout<< faiCiao(name,surname);
    return 0;
}


