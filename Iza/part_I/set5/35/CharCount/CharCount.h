#ifndef CHARCOUNT_H_
#define CHARCOUNT_H_

#include <iostream>

struct Char
{
    char ch;
    size_t count;
};

struct CharInfo 
{
    Char **ptr;
    size_t nCharObj;
};


class CharCount
{
    CharInfo d_charInfo;

    public:
        enum Action
        {
            APPEND,
            INSERT,
            INC,
        };
        CharCount();
        const CharInfo &info() const;
        void count(std::istream &stream);

    private:
        Action locate(char c, size_t &idx);
        void append(Char *&newPtr, size_t index);
        void insert(Char *&newPtr, size_t index);
        
};

#endif