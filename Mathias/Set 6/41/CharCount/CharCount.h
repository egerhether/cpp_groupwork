#ifndef CHARCOUNT_H_
#define CHARCOUNT_H_

#include <iostream>

struct Char
{
    char ch;
    size_t count;
    ~Char() = default;
};

struct CharInfo 
{
    Char *ptr;
    size_t nCharObj;
};


class CharCount
{
    CharInfo d_charInfo;
    size_t d_capacity;

    public:
        CharCount();
        const CharInfo &info() const;
        void count(std::istream &stream);
        size_t capacity();
        Char *rawCapacity();
        void destroy();

    private:
        void append(char c, size_t index);
        void insert(char c, size_t index);
        void enlarge();
        
};

#endif