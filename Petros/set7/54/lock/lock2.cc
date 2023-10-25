#include "lock.ih"

Lock::Lock(string const &filePath, string const &lockDir)
{
    string lockFilePath = lockPath(filePath, lockDir);
    myOpen(lockFilePath);
}
