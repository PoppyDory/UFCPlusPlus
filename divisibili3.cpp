#include <iostream>
#include <cmath>

using namespace std;

void divisibili(int x, int y)
{
    int i;
    for (i = x; i >=y; i--)
    {
        if (i %3==0)
        {
        cout << i << endl;
        }
    }

}

int main ()
{
    cout<< "Stampa i numeri divisibili per 3: "<<endl;
    divisibili(300,150);
}