#include <iostream>
#include <string>

struct Car
{
    std::string brand;
    int year;
};

void updateYear(Car &c)
{
    c.year++;
}

int main()
{
    Car myCar = {"Toyota", 2020};
    updateYear(myCar);
    std::cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";
    return 0;
}