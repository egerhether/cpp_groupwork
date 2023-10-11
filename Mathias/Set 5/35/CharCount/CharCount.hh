#ifndef CHARCOUNT_H_
#define CHARCOUNT_H_

#include <iostream>
#include <string>

struct Char
{
    char ch;
    size_t count;
};

// struct for storing the char info
struct CharInfo 
{
    Char **ptr;
    size_t nCharObj;
};

class CharCount
{
    public:
                        // for different actions
        enum Action
        {
            APPEND,
            INC,
            INSERT,
        };

        CharCount();

                        // for counting the chars
        void count(std::istream& stream);

                        // to get the info of each char - returns a reference
        const CharInfo& info() const;

    private:
                        // private member variables and functions
        CharInfo charInfo;
        Action locate(char c, size_t& idx);
        void append(Char*& newPtr, size_t index);
        void insert(Char*& newPtr, size_t index);

    

};

#endif
