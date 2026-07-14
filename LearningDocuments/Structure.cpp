#include <iostream>
#include <string>

/*
C++ Structures

Structures (also called structs) are a way to group several related variables into one place.
Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types: int, string, bool, etc.
*/

// Option 1

struct
{
    std::string brand;
    std::string model;
    int serialNumber;
    int howManyUnits;
    double productionCost;
    double AddsUpProfit;
    double taxRate;
    double finalPrice;
} watchOne, watchTwo;

// Option 2

struct car
{
    std::string brand;
    std::string model;
    int serialNum;
};

int main()
{

    // Option 2
    car myCar;
    myCar.brand = "BMW";
    myCar.model = "B";
    myCar.serialNum = 10101;

    car yourCar;
    yourCar.brand = "Ford";
    yourCar.model = "A";
    yourCar.serialNum = 10203;

    // Option 1

    std::cout << "Brand" << "\n\n";
    std::getline(std::cin, watchOne.brand);

    std::cout << "Unit's Model " << "\n\n";
    std::getline(std::cin, watchOne.model);

    std::cout << "Unit's serial number " << "\n\n";
    std::cin >> watchOne.serialNumber;

    std::cout << "Please enter the production cost" << "\n\n";
    std::cin >> watchOne.productionCost;

    std::cout << "Determine the profit goal in USD" << "\n\n";
    std::cin >> watchOne.AddsUpProfit;

    std::cout << "Enter the product's tax rate in %" << "\n\n";
    std::cin >> watchOne.taxRate;

    std::cout << "How many units of this product you (did/want to) sell?" << "\n\n";
    std::cin >> watchOne.howManyUnits;

    double price = watchOne.productionCost + watchOne.AddsUpProfit;
    double priceInTotal = price * watchOne.howManyUnits;

    double computeTax = price / 100 * watchOne.taxRate;
    double computeTaxInTotal = computeTax * watchOne.howManyUnits;

    double result = price + computeTax;
    double resultInTotal = result * watchOne.howManyUnits;

    std::cout << "Brand: " << watchOne.brand << "\n\n";

    std::cout << "Model: " << watchOne.model << "\n\n";
    std::cout << "Serial Number: " << watchOne.serialNumber << "\n\n";

    std::cout << "Intend to sell: " << watchOne.howManyUnits << " Units" << "\n\n";

    std::cout << "Each unit costs: " << price << "\n\n";
    std::cout << "Tax on each unit: " << computeTax << "\n\n";
    std::cout << "Finale Pricing: " << result << "\n\n";

    std::cout << "................................." << "\n\n";

    std::cout << "Total costs: " << priceInTotal << "\n\n";
    std::cout << "Tax in total: " << computeTaxInTotal << "\n\n";
    std::cout << "Total Pricing: " << resultInTotal << "\n\n";

    return 0;
};