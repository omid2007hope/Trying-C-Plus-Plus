#include <iostream>

int main()
{

    for (int num = 0; num <= 120; num += 10)
    {
        if (num == 10 || num == 30 || num == 50 || num == 70 || num == 90)
        {

            /*

           The continue statement breaks one iteration (in the loop), if a specified condition occurs,
           and continues with the next iteration in the loop.

            */

            continue;
        };
        std::cout << "%" << num << std::endl;
        if (num == 100)
        {
            std::cout << "Done" << std::endl;

            /*

            You have already seen the break statement used in an earlier chapter of this tutorial.
            It was used to "jump out" of a switch statement.
            The break statement can also be used to jump out of a loop.

            */

            break;
        };
    };
    return 0;
};