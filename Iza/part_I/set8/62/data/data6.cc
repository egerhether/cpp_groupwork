#include "data.ih"

Data::~Data()
{
    destroy(u_field);
}