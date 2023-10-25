#include "value.ih"

Value::Value(double value)
:
    d_value(value),
    d_type(Token::DOUBLE)
{}
