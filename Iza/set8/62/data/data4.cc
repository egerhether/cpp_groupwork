#include "data.ih"

Data::Data(Data const &other, Field type)
{
    copy(type, other);
    u_field = type;
}