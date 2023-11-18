#include "lock.ih"

string const Lock::lockPath(string const &filePath, string const &lockDir) const
{
    // get the name of the file as a string
    string baseName = filesystem::path(filePath).filename();

    // add the .lck postfix
    string lockFileName = baseName + ".lck";

    // append it to the lockdir base
    string lockFilePath = lockDir + '/' + lockFileName;
    cerr << "filepath of .lck: " << lockFilePath << '\n';
    return lockFilePath;
}
