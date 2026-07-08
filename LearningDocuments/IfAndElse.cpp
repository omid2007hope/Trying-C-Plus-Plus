#include <iostream>
#include <cmath>
#include <string>

const int legalAgeInUS = 21;
const int thisYear = 2026;

int main()
{

    int birthYear;

    std::cout << "Enter your year of birth please! " << "\n\n";
    std::cin >> birthYear;

    int age = thisYear - birthYear;

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