#include <iostream>

// ! When you create a variable in C++, the compiler automatically reserves space in memory for it.
int sample = 10;
// ! The line above tells the program: "I need space to store an integer."
// ! C++ handles this memory automatically, so in this case, you dont have to worry about managing memory.

/*
Do You Have to Manage Memory Yourself?
Sometimes yes - and sometimes no.

For normal variables (like int x = 10;), C++ takes care of the memory for you.

But when you want to create memory manually while the program is running (for example: based on user input),
you need to manage it yourself and clean it up when you're done.

If your program uses too much memory, or forgets to clean up memory it no longer needs,
it can lead to slow performance or even crashes.

That's why understanding memory is important. It gives you more control and helps avoid common bugs.
*/

// In C++, you can use pointers to access and change memory directly.

// ! This is powerful, but also risky. If you use a pointer the wrong way,
// ! you could accidentally change or damage other parts of your program's memory.

// The new keyword lets you manage memory yourself.

int main()
{

    int *ptr = new int;

    *ptr = 35;

    std::cout << *ptr;

    // ! Explanation:
    /*
    new int creates memory space for one integer

    ptr stores the address of that space

    *ptr = 35; stores the number 35

    cout << *ptr; prints the value

    So we used new to create memory, and ptr to access it.
    */

    /*
    When you create something with new, it's your job to remove it when you're done.
    To do that, use delete:
    */

    delete ptr;

    // This tells C++ : "I'm done with this memory, you can clean it up now."

    // ! What Happens If You Forget delete?

    /*
    If you forget to delete memory, your program will still run, but it may use more and more memory over time.
    This is called a memory leak,
    and it can slow down or crash your program over time.
    */

    return 0;
};
