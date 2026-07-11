#include <iostream>
#include <cmath>
#include <string>

/*
There is also a "for-each loop" (also known as ranged-based for loop),
which is used to loop through elements in an array (or other data structures):
*/

int nums[3] = {3, 6, 9};
std::string sample = "XYZ";

int main()
{

    /*
    Syntax

    for (type variableName : arrayName) {

    code block to be executed

    }

    Good to know: The for-each loop was introduced in C++ version 11 (2011).
    */

    for (int num : nums)
    {
        std::cout << log(num) << "\n\n";

        for (char x : sample)
        {
            std::cout << x << "\n\n";
        };
    };

    return 0;
};
