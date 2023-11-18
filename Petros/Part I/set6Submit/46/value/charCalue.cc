#include "value.ih"

void Value::charValue(char value)
{
    d_type = CHAR;
    d_value.u_char = value;
}
