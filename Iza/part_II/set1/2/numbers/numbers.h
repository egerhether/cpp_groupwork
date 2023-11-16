#ifndef INCLUDED_NUMBERS_H_
#define INCLUDED_NUMBERS_H_

#include <iosfwd>
#include <utility>

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

                                        // comparison operators
        friend bool operator==(Numbers const &lhs, Numbers const &rhs);
        friend bool operator==(Numbers &&tmp, Numbers const &rhs);

        friend bool operator!=(Numbers const &lhs, Numbers const &rhs);
        friend bool operator!=(Numbers &&tmp, Numbers const &rhs);

                                        // addition assignment operators
        Numbers &&operator+=(Numbers const &other) &&;
        Numbers &operator+=(Numbers const &other) &;

                                       // addition operators
        friend Numbers operator+(Numbers &&tmp, Numbers &rhs);
        friend Numbers operator+(Numbers &lhs, Numbers &rhs);

                                        // difference assignment operators
        Numbers &&operator-=(Numbers const &other) &&;
        Numbers &operator-=(Numbers const &other) &;

                                       // difference operators
        friend Numbers operator-(Numbers &&tmp, Numbers &rhs);
        friend Numbers operator-(Numbers &lhs, Numbers &rhs);

                                        // product assignment operators
        Numbers &&operator*=(int const nr) &&;
        Numbers &operator*=(int const nr) &;

                                       // product operators
        friend Numbers operator*(Numbers &&tmp, int const nr);
        friend Numbers operator*(Numbers &lhs, int const nr); 
        friend Numbers operator*(int const nr, Numbers &rhs);
        friend Numbers operator*(int const nr, Numbers &&tmp);

                                        // division assignment operators
        Numbers &&operator/=(int const nr) &&;
        Numbers &operator/=(int const nr) &;

                                       // division operators
        friend Numbers operator/(Numbers &&tmp, int const nr);
        friend Numbers operator/(Numbers &lhs, int const nr);        


    
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

inline Numbers operator+(Numbers &&tmp, Numbers &other)
{
    return std::move(tmp) += other;
};

inline Numbers operator-(Numbers &&tmp, Numbers &other)
{
    return std::move(tmp) -= other;
};

inline Numbers operator*(Numbers &&tmp, int const nr)
{
    return std::move(tmp) *= nr;
};

inline Numbers operator*(int const nr, Numbers &rhs)
{
    return rhs * nr;
};

inline Numbers operator*(int const nr, Numbers &&tmp)
{
    return tmp * nr;
};

inline Numbers operator/(Numbers &&tmp, int const nr)
{
    return std::move(tmp) /= nr;
};


#endif 