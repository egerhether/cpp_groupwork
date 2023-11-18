#include "main.ih"

int main()
{
    CharCount counter;
    counter.count(cin);
    CharInfo const info = counter.info();

    for (size_t idx = 0; idx != info.nCharObj; ++idx)
        CharCount::showChar(info.ptr[idx]);
}
