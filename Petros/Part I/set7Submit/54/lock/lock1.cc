#include "lock.ih"

Lock::Lock(string const &filePath)
{
    string lockFilePath = lockPath(filePath);
    myOpen(lockFilePath); 
}
