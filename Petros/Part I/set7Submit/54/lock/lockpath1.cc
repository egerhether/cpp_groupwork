#include "lock.ih"

string const Lock::lockPath(string const &filePath) const
{
    // add the .lck postfix
    string lockFilePath = filePath + ".lck";
    cerr << "filepath of .lck: " << lockFilePath << '\n';
    return lockFilePath;
}
