#include <iostream>

int toPerCapita(int gdp, int population) {

    if(gdp > population) {
        return gdp / population;
    } 
    else {
        return population / gdp;
    };

};

double toPerCapita(double gdp, double population) {

    if(gdp > population) {
        return gdp / population;
    } 
    else {
        return population / gdp;
    };
};

int main() {
    int GDP = 2e9;
    int population = 250e3;
    
    int compute = toPerCapita(GDP, population) ;
    double computeAccurately = toPerCapita(GDP,  population) ;

std::cout << "GDP Per Capita: " << compute  << "\n\n";
std::cout << "More Accurate GDP Per Capita: " << computeAccurately << "\n\n";

return 0;
};