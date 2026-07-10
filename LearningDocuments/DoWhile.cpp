#include <iostream>

bool loaded = false;
bool loading = false;

int main()
{

    do
    {
        loading = true;

        while (loading == true)
        {

            std::cout << "All 20 products loaded succesfully" << "\n\n";
            loading = false;
        };

        loaded = true;
    } while (loaded == false);

    return 0;
};
