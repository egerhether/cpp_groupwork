#include "encryption.ih"

void Encryption::decrypt(istream &in, ostream &out, size_t length, string pass)
{
    endecrypt(in, out, sub, length, pass);
}