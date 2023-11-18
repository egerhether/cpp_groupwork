#include "value.ih"

Value::Value(int index, char indentifier)
:
    d_value(index),
    d_type(Token::IDENT)
{}
