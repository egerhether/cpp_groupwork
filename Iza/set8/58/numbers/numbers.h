#ifndef NUMBERS_H_
#define NUMBERS_H_

#include <iosfwd>

class Numbers
{
    size_t d_length;
    int *d_ints;

    public:

        Numbers(size_t count, int value);
        Numbers(size_t count);
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);

        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);

        ~Numbers();     

        int const &at(size_t idx) const;
        int &at(size_t idx);

        void write(std::ostream &stream);

        size_t length();

        void swap(Numbers &other);

        private:

        int &safeAt(size_t idx) const; 

        int *newPointers(size_t cap, int value);
        int *newPointers(size_t cap);

};

inline int const &Numbers::at(size_t idx) const
{
    return safeAt(idx);
}

inline int &Numbers::at(size_t idx)
{
    return safeAt(idx);
}

inline size_t Numbers::length()
{
    return d_length;
}

#endif