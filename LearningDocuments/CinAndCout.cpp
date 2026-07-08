#include <iostream>
using namespace std;

/*
To use strings, you must include an additional header file in the source code, the <string> library:
*/

#include <string>

/* Good To Know

cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

*/

string inputFullname;

int main()
{

    /*
     cin considers a space (whitespace, tabs, etc) as a terminating character,
     which means that it can only store a single word (even if you type many words):
     That's why, when working with strings, we often use the getline() function to read a line of text.
     It takes cin as the first parameter, and the string variable as second:
    */

    cout << "Type your fullname, firstname + lastname here: " << "\n\n";
    getline(cin, inputFullname);
    cout << "your fullname is: " << inputFullname << endl;

    return 0;
};