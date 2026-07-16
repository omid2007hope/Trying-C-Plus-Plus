#include <iostream>
#include <cmath>

int computeDistance(double v, double t)
{

    return t * v / 2;
};

int toMeterPerSecond(double speed)
{

    return speed * 1000;
};

int main()
{

    double speedOfLight = 299792.458;

    double v = toMeterPerSecond(speedOfLight);

    double t = 0.0756389942271;

    std::cout << "Distance is: " << computeDistance(v, t);

    return 0;
};
