#include <iostream>
#include <cmath>
#include <string>

const int legalAgeInUS = 21;
int age;

int main()
{

    std::cout << "Enter your age please! " << "\n\n";
    std::cin >> age;

    if (legalAgeInUS <= age)
    {
        std::cout << "Recommend beer.";
    }
    else
    {
        std::cout << "Recommend Water.";
    }

    return 0;
}