#include "charcount.ih"

void CharCount::showChar(Char myChar)
{
    if (isprint(myChar.character))
        cout << "char '" << myChar.character << "' : " << myChar.occurences <<
                " times\n";
    else
        switch (myChar.character)
        {
            case '\n':
                cout << "char '" << R"(\n)" << "' : " << myChar.occurences <<
                        " times\n";
                break;

            case '\t':
                cout << "char '" << R"(\t)" << "' : " << myChar.occurences <<
                        " times\n";
                break;

            default:
                cout << "char '" << int(myChar.character) << "' : " << 
                        myChar.occurences << " times\n";
                break;
        }
}
