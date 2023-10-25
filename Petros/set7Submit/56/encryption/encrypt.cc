#include "encryption.ih"

void Encryption::encrypt(std::istream &in, std::ostream &out,
                                        size_t length, string pass)
{
    endecrypt(in, out, add, length, pass);
}