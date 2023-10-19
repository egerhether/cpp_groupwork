#include "value.ih"

Value::Value()
:
    d_type(Token::INT)
{
    d_value.u_int = 0;
}
