#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

struct CharCount
{
    CharCount();
    ~CharCount();

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
    
    void count(std::istream &input);    // counts chars from istream
    const CharInfo &info()                      const;
    static void showChar(Char myChar);  // prints char in a nice way
    size_t capacity()                           const;

    private:
        CharInfo d_CharInfo;
        size_t d_capacity = 8;

        void locate(char nextChar);     // locates and adds the char nextChar
        void insert(char nextChar, size_t idx); // same inserts at idx

        // memory allocation functions
        Char* rawCapacity()                         const;
        void enlarge();
};
        
#endif
