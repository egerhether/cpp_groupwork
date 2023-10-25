#include "lock.ih"

bool Lock::valid() const
{
    int flockRet = flock(d_descriptor, LOCK_EX);  
    cerr << "flock returned: " << flockRet << '\n';
    if (flockRet != 0)          // on falure -1 is thrown
        return false;
    return true;
}
