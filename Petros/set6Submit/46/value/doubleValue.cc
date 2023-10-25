#include "value.ih"

void Value::doubleValue(double value)
{
    d_type = DOUBLE;
    d_value.u_double = value;
}
