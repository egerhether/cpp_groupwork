#include "encryption.ih"

void Encryption::endecrypt(istream &in, ostream &out, 
                    char (*operation)(char,char), size_t length, string pass)
{
    char buffer[length];
    streamsize len = length;
    while (in.get(buffer, len))
        out << convert(buffer, operation, length, pass);
    
}