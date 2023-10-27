#include "data.ih"

Data::Data(Data &&tmp, Field type)
{
    move(type, std::move(tmp));
    u_field = type;
}