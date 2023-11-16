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
        // Numbers(std::initializer_list<int> iniList);
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);
        ~Numbers();

        void swap(Numbers &other);
        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);

                                        // index operators
        int &operator[](size_t idx);
        int const &operator[](size_t idx) const;

                                        // friend insertion operator
        friend std::ostream &operator<<(std::ostream &stream, 
                                                Numbers const &obj);

        friend bool operator==(Numbers const &lhs, Numbers const &rhs);
        friend bool operator==(Numbers &&tmp, Numbers const &rhs);

        friend bool operator!=(Numbers const &lhs, Numbers const &rhs);
        friend bool operator!=(Numbers &&tmp, Numbers const &rhs);
    
    private:
        int &element(size_t idx) const;
};

inline int &Numbers::operator[](size_t idx)
{
    return element(idx);
};

inline int const &Numbers::operator[](size_t idx) const
{
    return element(idx);
};

inline int &Numbers::element(size_t idx) const
{
    return d_nums[idx];
};

#endif 