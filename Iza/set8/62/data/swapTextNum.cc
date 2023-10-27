#include "data.ih"

void Data::swapTextNum(Data &obj1, Data &obj2)
{
    std::swap(obj1.u_word, obj2.u_word);
    std::swap(obj1.u_value, obj2.u_value);
    std::swap(obj1.u_field, obj2.u_field);
}