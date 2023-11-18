#include "encryption.ih"

string Encryption::passwd()
{
    if (d_pwd.length() <= 5)                // if password too short
        usage(d_progname); 
    else if (d_pwd.length() <= 10)          // if too short but extendable
        d_pwd = extend(d_pwd);
    
    
    return d_pwd;
}