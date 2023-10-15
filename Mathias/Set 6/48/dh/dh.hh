#ifndef DH_H
#define DH_H

#include <string>

enum Type
{
    ALICE,
    BOB
};

class DH
{
    public:
        DH(Type type, const std::string& parameter1, const std::string& parameter2);

    private:
        void alice(const std::string& socketName, const std::string& bobPublicFileName);
        void bob(const std::string& bobPublicFileName, const std::string& alicePublicFileName);
};

#endif

