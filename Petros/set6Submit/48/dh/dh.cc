#include "dh.ih"
                                    //constructor takes in three parameters
DH::DH(Type type, std::string const &first, std::string const &second)
{
    (type == ALICE ? alice(first, second) : bob(first, second));
}
