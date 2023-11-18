#include "value.ih"

void Value::intValue(int value)
{
    d_type = INT;
    d_value.u_int = value;
}
