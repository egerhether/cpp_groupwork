#include "encryption.ih"

void Encryption::encrypt(istream &in, ostream &out, size_t length, string pass)
{
    endecrypt(in, out, add, length, pass); // endecrypt with addition
}