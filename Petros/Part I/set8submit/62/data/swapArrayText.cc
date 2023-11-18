#include "data.ih"

void Data::swapArrayText(Data &obj1, Data &obj2)
{
    std::swap(obj1.u_double, obj2.u_double);
    std::swap(obj1.u_word, obj2.u_word);
    std::swap(obj1.u_field, obj2.u_field); // the active field is swapped
}