#include <iostream>

enum Level
{
    Easy = 25,
    Normal = 50,
    Hard = 75

};

int main()
{
    enum Level thisVar = Normal;

    switch (thisVar)
    {
    case 25:
        /* code */
        break;

    case 50:

        std::cout << "difficulty: Normal";

        break;
    case 75:
        /* code */
        break;

    default:
        break;
    }

    return 0;
};