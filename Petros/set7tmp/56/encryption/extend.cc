#include "encryption.ih"

string Encryption::extend(string str)
{
                    // formula for extending the password
    for (size_t idx = str.length(); idx != str.length() * 2; ++idx)
    {
        char c = str[idx - str.length()];
        str.resize(idx, c + c);
    }

    return str;

}