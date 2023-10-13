#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    size_t d_capacity;
    std::string *d_str;

    public:
        struct POD
        {
            size_t      size;
            std::string *str;
        };

        Strings();
        Strings(int argc, char *argv[]);
        Strings(char *environLike[]);
        Strings(std::istream &in);
        ~Strings();

        void swap(Strings &other);              

        size_t size() const;

        std::string const *data() const;

        POD release();

        size_t capacity();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        //void resize(size_t size, std::string str);
        //void resize(size_t size);

        void reserve(size_t cap);

        void add(std::string const &next);          // add another element

    private:
        void fill(char *ntbs[]);                    // fill prepared d_str
        void destroy();                 

        std::string &safeAt(size_t idx) const;      // private backdoor

        static size_t count(char *environLike[]);   // # elements in env.like

        std::string *rawMemory(size_t cap);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

inline size_t Strings::capacity()
{
    return d_capacity;
}

        
#endif

