#include <iostream>
#include <string>
using namespace std;

// ! Note: For arrays, use new[] and delete[]. For single variables, use new and delete.

/*
Dynamic arrays are useful when you don't know the size of the array in advance -
like when the size depends on user input or other values that are not known at the start of the program.

For example, imagine you run a hotel. Since you don't know how many guests will arrive,
you ask the user for the number and create that many rooms - one to store each guest's name:
*/

// ! When to Use new

// In most cases, you don't need to use new. C++ will automatically handle memory for normal variables like:

/*
But sometimes, you have to manage memory yourself - especially when:

You don't know how much memory you'll need in advance (like how many guests or scores)
You want to create memory while the program is running, based on user input
You need to store large or flexible amounts of data
You want full manual control over memory (e.g., performance-critical code)
In those cases, new helps you create memory, and delete helps you clean it up when you're done.
*/

// ! Tip: If you use new, always remember to use delete (or delete[] for arrays) to avoid memory leaks.

int main()
{
    int numGuests;
    cout << "How many guests? ";
    cin >> numGuests;

    // Check for invalid input
    if (numGuests <= 0)
    {
        cout << "Number of guests must be at least 1.\n";
        return 0;
    }

    // Create memory space for x guests (an array of strings)
    string *guests = new string[numGuests];

    // Ignore the leftover newline character after reading numGuests
    cin.ignore();

    // Enter guest names
    for (int i = 0; i < numGuests; i++)
    {
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]); // Read the full name (including spaces)
    }

    // Show all guests
    cout << "\nGuests checked in:\n";
    for (int i = 0; i < numGuests; i++)
    {
        cout << guests[i] << "\n";
    }

    delete[] guests; // Clean up memory
    return 0;
}