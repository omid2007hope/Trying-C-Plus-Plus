#include <iostream>
// Include the cmath library
#include <cmath>
using namespace std;

int second;
int minute;
int hour;

int main()
{

    while (second < 60)
    {
        second += 1;
        cout << "second: " << second << "\n\n";
    };

    while (minute < 60)
    {
        if (second == 60)
        {
            second -= 60;
        }

        minute += 1;
        cout << "minute: " << minute << "\n\n";
    };

    while (hour < 24)
    {
        if (minute == 60)
        {
            minute -= 60;
        };

        hour += 1;
        cout << "hour: " << hour << "\n\n";
    }
    return 0;
};