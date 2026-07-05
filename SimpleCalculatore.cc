#include <iostream>

int x, y;

int sum;

int main()
{

    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Type anohter number: ";
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum is:" << sum;
}