#include "value.ih"

Value::Value(int value)
:
    d_value.u_int(value),
    d_type(Token::INT)
{}
