#include <iostream>

int main()
{

    for (int num = 0; num <= 120; num += 10)
    {
        if (num == 10 || num == 30 || num == 50 || num == 70 || num == 90)
        {

            continue;
        };
        std::cout << "%" << num << std::endl;
        if (num == 100)
        {
            std::cout << "Done" << std::endl;
            break;
        };
    };
    return 0;
};