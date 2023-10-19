#include "dh.ih"

void DH::chooseAndCall(Type type, const std::string &first, 
                       const std::string &second) 
{
    (type == ALICE ? alice(first, second) : bob(first, second));
}
