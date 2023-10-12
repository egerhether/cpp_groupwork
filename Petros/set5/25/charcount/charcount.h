#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

struct Char
{ 
    char character; 
    size_t occurences;
};

struct CharInfo
{
    Char *ptr;
    size_t nCharObj;
};

class CharCount
{
    CharInfo d_CharInfo;

    public:
        CharCount();

        enum Action
        {
            APPEND,
            INSERT,
            INC,
        };
        
        void count(std::istream &input);
        const CharInfo &info()                      const;
        static void showChar(Char c);

    private:
        Action locate(char c, size_t *idx)          const;
        void append(char nextChar);
        void insert(char nextChar, size_t idx);
};
        
#endif
