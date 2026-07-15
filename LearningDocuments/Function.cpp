#include <iostream>

/*
C++ provides some pre-defined functions, such as main(),
which is used to execute code. But you can also create your own functions to perform certain actions.
*/

// ! void means that the function does not have a return value. You will learn more about return values later in the next chapter

void justAFunction()
{
    std::cout << "I just got executed!";
};

/*
A C++ function consist of two parts:

Declaration: the return type, the name of the function, and parameters (if any)
Definition: the body of the function (code to be executed)
*/

int main()
{

    // ! Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.
    justAFunction();
    // ! A function can be called multiple times :
    justAFunction();
    justAFunction();
    // ETC

    return 0;
};

// ! Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:

/*
However, it is possible to separate the declaration and the definition of the function - for code optimization.
*/

/*
You will often see C++ programs that have function declaration above main(),
and function definition below main(). This will make the code better organized and easier to read:
*/

// Function declaration
void myFunction();

// The main method
int main()
{
    myFunction(); // call the function
    return 0;
}

// Function definition
void myFunction()
{
    std::cout << "I just got executed!";
}