#include "encryption.ih"

Encryption::Encryption(int argc, char **argv, 
                       int (*usage)(std::string const &progname))
                       : usage(usage)
{
    d_progname = argv[0]; 

    if (argc == 5) // if given filepaths, save them to respective data members
    {
        d_in = argv[3];
        d_out = argv[4];
    }

    ifstream stream{ argv[2] };         // initialise ifstream with password 
                                        // filepath

    if (stream.good())                  // save the password to string 
        d_pwd = string((istreambuf_iterator<char>(stream)), 
            istreambuf_iterator<char>());
    else                               // if incorrect filepath given 
    {
        cout << "please specify correct filepath to password\n";
        usage(d_progname);
    }

    switch (*argv[1])
    {
        case 'e':
            d_mode = 'e';
            break;

        case 'd':
            d_mode = 'd';
            break;

        default:
            usage(d_progname);
    }
}