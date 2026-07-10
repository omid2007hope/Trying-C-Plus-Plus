#include <iostream>
#include <cmath>

int nums[3] = {3, 6, 9};

int main()
{

    for (int num : nums)
    {

        std::cout << log(num) << "\n\n";
    };

    return 0;
};