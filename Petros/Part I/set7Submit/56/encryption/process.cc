#include "encryption.ih"

int Encryption::process()
{
    string pass = passwd();
    size_t len = pass.length();
    void (*selectedMode)(istream &, ostream &, size_t, string) = mode();
    if (mode())
    {
        if (d_in.empty())
            (*selectedMode)(cin, cout, len, pass);
        else 
        {
            ifstream inputFile(d_in);
            ofstream outputFile(d_out);

            if (inputFile.is_open() && outputFile.is_open()) 
            {
                (*selectedMode)(inputFile, outputFile, len, pass);
                inputFile.close();
                outputFile.close();
            } 
            else 
                return usage(d_progname);
        }
    }
    else 
        return usage(d_progname);

    return 0;
}
