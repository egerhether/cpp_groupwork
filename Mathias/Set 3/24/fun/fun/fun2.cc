#include "fun.ih"

void fun2(string const &str)
{
    size_t sum = 0;
    for (size_t idx = 0; idx < str.length(); ++idx)
        sum += str[idx];
}
