#include "symbol.ih"

Symbol::Symbol(std::string name, int value)
:
    d_name(name),
    d_Value(value, 'X')         // X is a placeholder to overload value
{}
