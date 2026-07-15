#include <iostream>
#include <string>

/*
Default Parameter Value
You can also use a default parameter value, by using the equals sign (=).

If we call the function without an argument, it uses the default value ("Austria"):
*/

void defineCountry(std::string country = "Austria")
{
    std::cout << country << "\n\n";
};

/*
A parameter with a default value, is often known as an "optional parameter".
From the example above, country is an optional parameter and "Austria" is the default value.
*/

int main()
{

    defineCountry();
    defineCountry("USA");
    defineCountry("Poland");
    defineCountry("japan");

    return 0;
};