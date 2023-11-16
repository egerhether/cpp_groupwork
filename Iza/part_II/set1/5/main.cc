#include "main.ih"

void fun(First::Enum symbol)
{
    std::cout << "global fun used\n";
}

int main()
{
    First::Enum symb;
    fun(symb);
}