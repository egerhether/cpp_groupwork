#include "main.ih"

void showChar(Char ch)
{   
    if (isprint(ch.ch))
        cout << "char '" << ch.ch << "' : " << ch.count << " times\n";
    else 
    {
        switch (ch.ch)
        {
            case '\n':
                cout << "char '" << R"(\n)" << "' : " << ch.count 
                                 << " times\n";
                break;

            case '\t':
                cout << "char '" << R"(\t)" << "' : " << ch.count 
                                 << " times\n";
                break;

            default:
                cout << "char '" << int(ch.ch) << "' : " << ch.count 
                                 << " times\n";

        }
    }
}