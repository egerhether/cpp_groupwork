#include "encryption.ih"

int Encryption::process()
{
    string pass = passwd();             // get password
    size_t len = pass.length();         // get its lenth
                                        // get the conversion mode 
    void (*selectedMode)(istream &, ostream &, size_t, string) = mode();
    if (mode())
    {
        if (d_in.empty())            // when input and output paths unspecified
            (*selectedMode)(cin, cout, len, pass); // proceed with cin and cout
        else 
        {
            ifstream inputFile(d_in);       // initialise fstreams to input path
            ofstream outputFile(d_out);     // and output pathh

            if (inputFile.is_open() && outputFile.is_open())  // if files exist
            {
                              // proceed to en-/decryption with specified files
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

    return 0;                               // if all is good
}
