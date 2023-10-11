
#include "main.ih"
#include <iostream>
// used for couting a char
void showChar(char ch) {
    if (ch == ' ')
        cout << "char ' '";
    else if (ch == '\n')
        cout << "char '\\n'";
    else if (ch == '\t')
        cout << "char '\\t'";
    else if (isprint(ch))
        cout << "char '" << ch << "'";
    else
        cout << "char " << static_cast<int>(ch);
}
