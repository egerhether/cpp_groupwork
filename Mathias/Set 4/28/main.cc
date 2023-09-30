#include "main.ih"

int main() {
    Line lineParser;

    while (lineParser.getLine())
    {
        string word;
        while (!(word = lineParser.next()).empty())
        {
            cout << "Next word: " << word << '\n';
        }
    }
}
