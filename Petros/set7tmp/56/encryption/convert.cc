#include "encryption.ih"

string Encryption::convert(string in, char (*operation)(char,char), 
                                                    size_t length, string pass)
{
    string out = in;            // initialise the converted 
    
                                // for each char in the string we perform
                                // the operation passed to the function
    for (size_t idx = 0; idx != in.length(); ++idx)
        out[idx] = operation(out[idx], pass[idx % length]); 

    return out;
}