#include "value.ih"

Value::Value(double value)
:
    d_value.u_double(value),
    d_type(Token::DOUBLE)
{}
