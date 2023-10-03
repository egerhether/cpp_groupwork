#include "main.ih"

int main()
{
    Parser parser;

    while (parser.reset()) // Read lines until there are no more lines
    {
        double number;
        Parser::Return result = parser.number(&number);

        switch (result)
        {
        case Parser::NUMBER:
            cout << "Parsed number: " << number << '\n';
            break;
        case Parser::NO_NUMBER:
            cout << "There is no number on this line." << '\n';
            break;
        case Parser::EOLN:
            cout << "End of line reached." << '\n';
            break;
        default:
            break;
        }

        bool isIntegral = parser.isIntegral();
        cout << "Is integral: " << (isIntegral ? "true" : "false") << '\n';

        string next = parser.next();
        cout << "Next substring: " << next << '\n';
    }
}
