#include "charcount.ih"

void CharCount::showChar(Char myChar)
{
    switch (myChar.character)
    {
    case '\n':
        cout << "char '\\n' : " << myChar.occurences <<
                " times\n";
    break;

    case '\t':
        cout << "char '\\t' : " << myChar.occurences <<
                " times\n";
    break;

    default:
        if (isprint(myChar.character))
        {
            cout << "char '" << myChar.character << "' : " << 
                    myChar.occurences << " times\n";
            return;
        }

        cout << "char '" << int(myChar.character) << "' : " << 
                myChar.occurences << " times\n";
    break;
    }
}
