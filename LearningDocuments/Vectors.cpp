#include <iostream>
#include <string>
#include <vector> //! Including the vector library

std::vector<std::string> cars = {"Volvo", "BMW", "Ford"};

int main()
{
    // Adding another element to the vector
    cars.push_back("Tesla");

    for (const std::string &car : cars)
    {
        std::cout << car << "\n";
    }

    return 0;
}