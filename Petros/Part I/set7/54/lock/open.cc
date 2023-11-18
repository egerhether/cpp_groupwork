#include "lock.ih"

void Lock::myOpen(string const &lockPath)
{
    int flags;
                        // the flags we use depend on whether the path exists
    if (fs::exists(fs::path(lockPath)))
        flags = O_RDWR;
    else
        flags = O_CREAT | O_TRUNC | O_RDWR;

    mode_t mode = 0600;

    d_descriptor = open(lockPath.c_str(), flags, mode);
}
