#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    size_t d_capacity;
    std::string **d_str;

    public:
        struct POD
        {
            size_t size;
            std::string **str;
        };

        Strings();
        Strings(int argc, char *argv[]);
        Strings(char *environLike[]);
        Strings(std::istream &in);

        void swap(Strings &other);

        size_t size() const;
        size_t capacity() const;  // Added capacity function
        std::string const *data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);
        std::string **initPointers(size_t newCapacity);

        void add(std::string const &next);
        void destroy();
        void reserve(size_t newCapacity);  // Added reserve function
        void resize(size_t newSize);       // Added resize function

        ~Strings();
        
    private:
        void fill(char *ntbs[]);

        std::string *safeAt(size_t idx) const;
        std::string **enlarge();
        static size_t count(char *environLike[]);
};

inline size_t Strings::size() const
{
    return d_size;
}

inline size_t Strings::capacity() const
{
    return d_capacity;
}

inline std::string const *Strings::data() const
{
    return *d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return *safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return *safeAt(idx);
}

#endif
