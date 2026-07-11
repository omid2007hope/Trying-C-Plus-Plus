#include <iostream>
#include <string>

// ! Note: Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

/*
C++ Arrays

Arrays are used to store multiple values in a single variable,
instead of declaring separate variables for each value.
To declare an array, define the variable type,
specify the name of the array followed by square brackets and specify the number of elements it should store:
*/

std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

// Or

int myNum[3] = {10, 20, 30};

// ! Important
// ! In C++, you don't have to specify the size of the array.
// The compiler is smart enough to determine the size of the array based on the number of inserted values:
// ! However, the last approach is considered as "good practice", because it will reduce the chance of errors in your program.

std::string items[] = {"Volvo", "BMW", "Ford"}; // Three array elements

/*
You will often hear the terms "fixed size" and "dynamic size" when discussing arrays in C++.
This is because the size of an array in C++ is fixed, meaning you cannot add or remove elements after it is created.

Arrays - Fixed Size Exampl
An array with 3 elements

string cars[3] = {"Volvo", "BMW", "Ford"};

Trying to add another element (a fourth element) to the cars array will result in an error
cars[3] = "Tesla";
*/

int main()
{

    /*
    Access the Elements of an Array

    You access an array element by referring to the index number inside square brackets [].
    This statement accesses the value of the first element in cars:
    */

    std::cout << cars[0] << "\n\n";

    // Change an Array Element
    // To change the value of a specific element, refer to the index number:

    cars[0] = "Opel";

    std::cout << cars[0] << "\n\n";

    // Loop Through an Array
    // You can loop through the array elements with the for loop.

    for (int i = 0; i <= 5; ++i)
    {
        std::cout << cars[i] << "\n\n";
    }

    // Or even

    for (int i = 0; i < 5; i++)
    {
        std::cout << i << " = " << cars[i] << "\n\n";
    }

    // Same for integers

    for (int i = 0; i < 5; i++)
    {
        std::cout << myNum[i] << "\n\n";
    }

    // Or even better

    // Loop through integers
    for (int num : myNum)
    {
        std::cout << num << "\n\n";
    }

    // It is also possible to declare an array without specifying the elements on declaration, and add them later:

    // ! Note: The example above only works when you have specified the size of the array.
    // ! If you don't specify the array size, an error occurs:

    std::string brands[5];
    brands[0] = "Volvo";
    brands[1] = "BMW";
    brands[2] = "Ford";
    brands[3] = "Mazda";
    brands[4] = "Tesla";

    std::cout << brands << std::endl;

    return 0;
};