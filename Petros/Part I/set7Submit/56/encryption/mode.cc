#include "encryption.ih"

void (*Encryption::mode())(istream &, ostream &, size_t, string)
{
    if (d_mode == 'e')
        return encrypt;
    else
        return decrypt;
}