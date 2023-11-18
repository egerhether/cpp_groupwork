#ifndef INCLUDED_LOCK_
#define INCLUDED_LOCK_
#include <iosfwd>
 
class Lock
{
    int d_descriptor;

    public:
        Lock();
        Lock(std::string const &filePath);
        Lock(std::string const &filePath, std::string const &lockDir);
        ~Lock();                // releases the lock

        bool valid() const;   //returns true if locking was succesful

    private:
        std::string const lockPath(std::string const &filePath, std::string const &lockDir) const;
        std::string const lockPath(std::string const &filePath) const;

                                // opens the file and saves d_descriptor
        void myOpen(std::string const &lockPath);
        };
        
#endif
