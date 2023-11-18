#include "lock.ih"

bool Lock::valid() const
{
    if (d_descriptor == -1)             // on falure descriptor = -1
        return false;
    return true;
}
