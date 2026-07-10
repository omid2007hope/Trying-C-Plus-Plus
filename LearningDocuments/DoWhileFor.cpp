#include <iostream>

bool loaded = false;
bool loading = false;

int limit = 20;

const int alreadyLoaded = 0;

int main()
{

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

    return 0;
};
