#include "encryption.ih"

Encryption::~Encryption()
{
    d_pwd.erase();
    d_mode = 0;
    d_in.erase();
    d_out.erase();
    d_progname.erase();
}