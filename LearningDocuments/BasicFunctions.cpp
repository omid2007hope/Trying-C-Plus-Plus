#include <iostream>
using namespace std;

/*
To use strings, you must include an additional header file in the source code, the <string> library:
*/

#include <string>

string myName = "Omid ";
string mylastname = "Teimory";

/* Append()

A string in C++ is actually an object,
which contain functions that can perform certain operations on strings.
For example, you can also concatenate strings with the append() function:

*/

string betterFullName = myName.append(mylastname);

// ....................................
// ....................................
// ....................................

string justTest = "Never Ever Give Up";
string justAnotherText = "Hello";
string oneMoreExtraText = "Hello";

int main()
{

    /*

    To get the length of a string, use the length() function:

    */

    cout << justTest << " " << "has the txt length of: " << justTest.length() << "\n\n";

    /*

    You might see some C++ programs that use the size() function to get the length of a string.
    This is just an alias of length().
    It is completely up to you if you want to use length() or size():

    */

    cout << justTest << " " << "has the txt size of: " << justTest.size() << "\n\n";

    /*

    You can access the characters in a string by referring to its index number inside square brackets [].

    Note: String indexes start with 0: [0] is the first character. [1] is the second character, etc.

    */

    cout << justTest << " " << "Select first index: " << justTest[0] << "\n\n";

    /*

    To print the last character of a string, you can use the following code:

    */

    cout << "Select last index: " << justTest[justTest.length() - 1] << "\n\n";

    /* Change String Characters

    To change the value of a specific character in a string,
    refer to the index number, and use single quotes:

    */

    justAnotherText[0] = 'J';
    cout << "Select and change first index: " << justAnotherText << "\n\n";

    /*

    text[0] uses the array subscript operator,
    which is faster but does not perform bounds checking.
    Accessing an out-of-range index results in undefined behavior,
    potentially causing crashes or memory corruption.

    text.at(0) is a member function that performs bounds checking.
    If the index is invalid, it throws a std::out_of_range exception rather than causing undefined behavior,
    making it safer for debugging and robustness.

    Key Differences

    Feature	                text[0]	                         text.at(0)
    Bounds Checking	        None	                         Yes
    Error Handling	        Undefined Behavior	             Throws std::out_of_range
    Performance	            Faster	                         Slightly slower due to checks
    Use Case	            Performance-critical code	     Safety-critical or debugging

    In summary,
    use text[0] for performance when indices are guaranteed to be valid,
    and text.at(0) when safety and explicit error handling are priorities.

    */

    oneMoreExtraText.at(0) = 'J';

    cout << "Select and change first index with - at() :\n"
         << oneMoreExtraText << "\n\n";

    return 0;
};