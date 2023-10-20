#include "encryption.ih"

string Encryption::passwd()
{
    if (d_pwd.length() <= 5)
        usage(d_progname);
    else if (d_pwd.length() <= 10)
        d_pwd = extend(d_pwd);
    
    
    return d_pwd;
}