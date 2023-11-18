#include "lock.ih"

Lock::Lock(string const &filePath, string const &lockDir)
{
                                // check if the file we want to lock exists
                                // or is a directory.
    if (!fs::exists(fs::path(filePath)) ||
        fs::is_directory(fs::status(fs::path(filePath))))
        {
            d_descriptor = -1;
            return;
        }
    string lockFilePath = lockPath(filePath, lockDir);
    myOpen(lockFilePath);
    flock(d_descriptor, LOCK_EX);
}
