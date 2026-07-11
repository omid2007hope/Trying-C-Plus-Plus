#include <iostream>

/*
C++ For Loop

When you know exactly how many times you want to loop through a block of code,
use the for loop instead of a while loop:
*/

int main()

/*
Syntax

for (statement 1; statement 2; statement 3) {

code block to be executed

}

Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.
*/

{

    for (int num = 0; num <= 120; num += 10)
    {
        std::cout << num << std::endl;
    };
    return 0;
};