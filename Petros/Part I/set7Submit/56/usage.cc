#include "main.ih"


int usage(std::string const &progname)
{
    cout << "\n" <<
    "Usage: " << progname << " " << " e|d pwdfile [inflie outfile]" << '\n'
    << "Where:\n" 
    << "e|d:     specify e to encrypt, d to decrypt\n"
    << "pwdfile: the file containing the password\n"
    << "         (the password must consist of at least five characters)\n"
    << "infile:  the file to process\n"
    << "outfile: the processed file\n\n"
    << "infile *and* outfile may be omitted, in which case cin"
    << " and cout are used";

    return 1;
}
