#include "lock.ih"

Lock::~Lock()
{
    close(d_descriptor);
}
