#include "encryption.ih"

string Encryption::convert(string in, char (*operation)(char,char), 
                                                    size_t length, string pass)
{
    string out = in;
    for (size_t idx = 0; idx != in.length(); ++idx)
    {
        out[idx] = operation(out[idx], pass[idx % length]);
    }
    return out;
}