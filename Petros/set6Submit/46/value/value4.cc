#include "value.ih"

Value::Value(int index, char indentifier)
:
    d_type(Token::IDENT)
{
    d_value.u_int = index;
}
