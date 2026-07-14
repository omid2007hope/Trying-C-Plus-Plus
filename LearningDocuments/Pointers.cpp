#include <iostream>
#include <string>

/*
Tip: There are three ways to declare pointer variables, but the first way is preferred:

string* mystring; // Preferred
string *mystring;
string * mystring;
*/

// ! Note that the type of the pointer has to match the type of the variable you're working with.
std::string name = "Omid";
std::string *ptr = &name;

// ! we can get the memory address of a variable by using the & operator:
// ! A pointer however, is a variable that stores the memory address as its value.

int main()
{

    std::cout << name << "\n\n";
    std::cout << &name << "\n\n";
    std::cout << *ptr << "\n\n";

    /*
    You can also change the pointer's value. But note that this will also change the value of the original variable:
    */

    *ptr = "James";

    return 0;
};