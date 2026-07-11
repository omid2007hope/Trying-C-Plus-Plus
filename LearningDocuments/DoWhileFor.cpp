#include <iostream>

bool loaded = false;
bool loading = false;

int limit = 20;

const int alreadyLoaded = 0;

/*
The do/while loop is a variant of the while loop.
This loop will execute the code block once,
before checking if the condition is true.
Then it will repeat the loop as long as the condition is true.
*/

int main()
{

    /*
    Syntax

    do {

    code block to be executed

    } while (condition);

    Note: The semicolon ; after the while condition is required!
    */
    do
    {
        loading = true;

        while (loading == true)
        {
            if (loaded == false && alreadyLoaded == 0)
            {
                for (int notLoaded = 0; notLoaded < limit; ++notLoaded)
                {
                    std::cout << "Product number: " << notLoaded << " loaded succesfully" << "\n\n";
                }
            }

            std::cout << "All 20 products loaded succesfully" << "\n\n";
            loading = false;
        };

        loaded = true;
    } while (loaded == false);

    /*
    Summary:

    The do/while loop always runs at least once, even if the condition is already false.
    This is different from a regular while loop,
    which would skip the loop entirely if the condition is false at the start.
    This behavior makes do/while useful when you want to ensure something happens at least once,
    like showing a message or asking for user input.
    */

    return 0;
};
