#include "charcount.ih"

void CharCount::showChar(Char myChar)
{
    string toCout;
                                // if we can print our char as is
    if (isprint(myChar.character))
        toCout = myChar.character;
    
    else                        // else format in this switch statement
        switch (myChar.character)
        {
            case '\n':
                toCout = "\\n";
            break;

            case '\t':
                toCout = "\\t";
            break;

            default:
                toCout = to_string(static_cast<int>(myChar.character));
            break;
        }
        
    cout << "char '" << toCout << "' : " << myChar.occurences << 
            " times\n";
}
