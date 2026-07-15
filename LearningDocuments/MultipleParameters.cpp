#include <iostream>
#include <string>

/*
Multiple Parameters
Inside the function, you can add as many parameters as you want:
*/

void myFunction(std::string fullName, int age)
{
    std::cout << fullName << " is" << age << " years old" << "\n\n";
};

// ! Note that when you are working with multiple parameters, the function call must have the same
// ! number of arguments as there are parameters, and the arguments must be passed in the same
// ! order.

int main()
{
    myFunction("Omid", 19);
    myFunction("Wesker", 40);
    myFunction("James", 60);

    return 0;
};
