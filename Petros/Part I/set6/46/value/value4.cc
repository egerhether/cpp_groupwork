#include "value.ih"

Value::Value(int index, char indentifier)
:
    d_value.u_int(index),
    d_type(Token::IDENT)
{}
