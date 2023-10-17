#include "main.ih"


int main()
{
    Symtab symtab;
    while (true)
    {
        cout << "? ";       // a prompt

        string line;
        cin >> line;        // get a word

        cout << "inserted " << symtab.find(line).ident() << "\n"
                "All symbols:\n";

        for (size_t idx = 0, end = symtab.size(); idx != end; ++idx)
            cout << symtab.at(idx).ident() << ' ';

        cout << '\n';
    }
}
