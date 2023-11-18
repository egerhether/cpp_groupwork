
#ifndef INCLUDED_NUMBERS_H_
#define INCLUDED_NUMBERS_H_

#include <iosfwd>

class Numbers
{
    size_t d_size = 0;
    int *d_nums = 0;

    public:
        explicit Numbers(size_t size);
    
        Numbers(size_t size, int value);
        Numbers(size_t size, int *values);
        Numbers(std::initializer_list<int> iniList);
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);
        ~Numbers();

        void swap(Numbers &other);
        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);

        int operator[](size_t idx);
        
        friend bool operator==(Numbers const &lhs, Numbers const &rhs);
        friend bool operator!=(Numbers const &lhs, Numbers const &rhs);
        friend std::ostream operator<<(std::ostream out, Numbers const &nums);

        // members of the public interface, like accessors
    
    private:
        // support members for this class, if any
};

#endif 
