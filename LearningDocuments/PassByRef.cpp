#include <iostream>

void changeValue(int &num)
{

    num = 50;
};

int main()
{

    int value = 10;
    changeValue(value);
    std::cout << "Value has been changed to: " << value;

    return 0;
};
