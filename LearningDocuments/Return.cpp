#include <iostream>
#include <cmath>

int computeDistance(double v, double t)
{

    return (t * v) / 2;
};

int toMeterPerSecond(double speed)
{

    return speed * 1000;
};

int toKmPerHour(double d)
{

    return d / 1000;
};

int main()
{

    double speedOfLight = 299792.458;

    double v = toMeterPerSecond(speedOfLight);

    double t = 0.0756389942271;

    double distance = computeDistance(v, t);

    std::cout << "Distance is: " << toKmPerHour(distance) << " km/h";

    return 0;
};
