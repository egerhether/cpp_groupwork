#include "main.ih"

int main()
{
    CharCount object;
    object.count(cin);
    const CharInfo &info = object.info();

    for (size_t idx = 0; idx != info.nCharObj; ++idx)    
       showChar(info.ptr[idx]);
}