#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int choice = 1;

    // Use the switch statement to select one of many code blocks to be executed.

    // 1 = Coffee
    // 2 = Tea

    switch (choice)
    {
    case 1:
        cout << "You ordered Coffee";
        break;

    case 2:
        cout << "You ordered Tea";
        break;

    default:
        cout << "Invalid choice";
    }

    /*
    The value of the expression is compared with the values of each case
    If there is a match, the associated block of code is executed
    The break and default keywords are optional, and will be described later in this chapter
    The switch expression is evaluated once
    */

    return 0;
};