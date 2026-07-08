#include <iostream>
using namespace std;

/*
To use strings, you must include an additional header file in the source code, the <string> library:
*/

#include <string>

/*
C-style strings are created with the char type instead of string.yu
As C++ was developed as an extension of C, it continued to support this way of creating strings in C++:

Key Differences
Feature	            C-Style Strings (char[])	        std::string
Memory Management	Manual (prone to leaks/overflows)	Automatic ( RAII)
Size Tracking	    Must use strlen() (O(n))	        Built-in .size() (O(1))
Concatenation	    strcat() (unsafe if buffer small)	+ or += operators
Comparison	        strcmp() returns integer	        == operator returns bool
Safety	            Low (no bounds checking)	        High (bounds checking optional)

While std::string is recommended for general C++ programming,
C-style strings remain necessary for interfacing with legacy C libraries or
systems requiring strict low-level memory control.
*/

string greeting1 = "Hello"; // Regular String
char greeting2[] = "Hello"; // C-Style String (an array of characters)

/*

Escape character	Result	                Description
\'	                '	                    Single quote
\"	                " 	                    Double quote
\\	                \	                    Backslash

*/

char strInArray[] = "Blue";

/*

It represents the second option: an array of individual characters ['B', 'l', 'u', 'e', '\0'].

In C and C++, a string literal like "Blue" is stored as a sequence of characters in memory, terminated by a null character (\0). When you declare char strInArray[] = "Blue";, the compiler creates an array where each element holds one character:

strInArray[0] = 'B'
strInArray[1] = 'l'
strInArray[2] = 'u'
strInArray[3] = 'e'
strInArray[4] = '\0' (null terminator)

char name[] = "Leo";
Memory: ['L', 'e', 'o', '\0']

*/

int main()
{

    cout << strInArray;

    return 0;
};