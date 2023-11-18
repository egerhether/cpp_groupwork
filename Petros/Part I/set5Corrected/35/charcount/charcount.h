#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>


class CharCount
{
    // structs needed for CharCount (and data member)
    public:
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

    // data member
    private:
        CharInfo d_CharInfo;

    public:
        CharCount();

        enum Action     // used to determine if append/insert/increment
        {
            APPEND,
            INSERT,
            INC,
        };

        void charCount() const;
        void count(std::istream &input);        // counts next char
        const CharInfo &info()      const;      // ret d_charInfo
        static void showChar(Char myChar);      // prints myChar in a nice way

    private:
                                // determines the correct position and action
                                // of the passed character and updates idx
        Action locate(char nextChar, size_t *idx) const;
                                
                                // appends nextChar to of d_CharInfo.ptr
        void append(char nextChar);

                                // inserts nextChar to the requested pos in
                                // d_CharInfo.ptr
        void insert(char nextChar, size_t idx);
};
        
#endif
