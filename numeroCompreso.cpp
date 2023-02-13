#include <iostream>
#include <string>

int main()
{
    int a,b,c;

    std::cout << "Primo numero \n";
    std::cin >> a;
    std::cout << "Secondo numero \n";
    std::cin >> b;
    std::cout << "Terzo numero \n";
    std::cin >> c;

    if ( a<b && b<c) {
        std::cout << "b e' compreso tra a e c \n";
    }
    else { 
        std::cout << "b non e' compreso tra a e c \n";
    }
    return 0;
}