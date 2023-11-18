#include "lock.ih"

// ML: DRY.
string const Lock::lockPath(string const &filePath, string const &lockDir) const
{
    // get the name of the file as a string
    string baseName = fs::path(filePath).filename();

    // append it to the lockdir base
    string lockFilePath = lockDir + '/' + baseName + ".lck";
    return lockFilePath;
}
