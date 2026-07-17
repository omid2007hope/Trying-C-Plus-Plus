#include <iostream>
#include <string>

struct Items
{
    std::string name;
    int serialnumber;
};

void passTo(Items each)
{

    std::cout << "Brand: " << each.name << " Serial Number: " << each.serialnumber << "\n\n";
};

int main()
{

    Items car = {"BMW", 10101};
    passTo(car);
    return 0;
};
