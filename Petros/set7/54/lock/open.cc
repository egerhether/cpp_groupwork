#include "lock.ih"

void Lock::myOpen(string const &lockPath)
{
    cerr << "lock path in myOpen: " << lockPath.c_str() << '\n';
    int flags;
                        // the flags we use depend on whether the path exists
    if (filesystem::exists(filesystem::path(lockPath)))
        flags = O_RDWR;
    else
        flags = O_CREAT | O_TRUNC | O_RDWR;

    mode_t mode = 0600;
    cerr << "mode: " << mode << '\n';

    d_descriptor = open(lockPath.c_str(), flags, mode);
    cerr << "d_descriptor = " << d_descriptor << '\n';
}
