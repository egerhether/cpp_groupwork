#ifndef DATA_H_
#define DATA_H_

#include <string>

union Data
{
    enum Field
    {
        ARRAY,
        TEXT,
        NUM
    };

    private:
        double (*u_double)[10];
        std::string u_word;
        size_t u_value;
        Field u_field; // active field for the Data object

    public:
        Data(double (*array)[10]);
        Data(std::string word);
        Data(size_t value);

        Data(Data const &other, Field type);
        Data(Data &&tmp, Field type);

        ~Data();

        void destroy(Field type);

        void copy(Field type, Data const &other);
        void move(Field type, Data &&tmp);

        void swap(Field type1, Field type2, Data &obj1, Data &obj2);

        double (*array() const)[10];
        std::string word() const;
        size_t value() const;

    private:
        void destroyArray();
        void destroyText();
        void destroyNum();
                                // array with addresses of destroy functions
        static void (Data::*s_destroy[])(); 

        void copyArray(Data const &obj);
        void copyText(Data const &obj);
        void copyValue(Data const &obj);
                                // array with addresses of copy functions
        static void (Data::*s_copy[])(Data const &); 

        void moveArray(Data &&obj);
        void moveText(Data &&obj);
        void moveNum(Data &&obj);
                                // array with addresses of move functions
        static void (Data::*s_move[])(Data &&);

        void swapArrayArray(Data &obj1, Data &obj2);
        void swapArrayText(Data &obj1, Data &obj2);
        void swapArrayNum(Data &obj1, Data &obj2);
        void swapTextText(Data &obj1, Data &obj2);
        void swapTextNum(Data &obj1, Data &obj2);
        void swapNumNum(Data &obj1, Data &obj2);
                                // array with addresses of swap functions
        static void (Data::*s_swap[3][3])(Data &, Data &);

};

                            // using inline definitions as most of those 
                            // functions are one liners

inline double (*Data::array() const)[10]
{
    return u_double;
}

inline std::string Data::word() const
{
    return u_word;
}

inline size_t Data::value() const
{
    return u_value;
}

inline void (Data::*Data::s_destroy[])() = {
    &Data::destroyArray, &Data::destroyText, &Data::destroyNum
};

inline void (Data::*Data::s_copy[])(Data const &) = {
    &Data::copyArray, &Data::copyText, &Data::copyValue
};

inline void (Data::*Data::s_move[])(Data &&) = {
    &Data::moveArray, &Data::moveText, &Data::moveNum
};

inline void (Data::*Data::s_swap[3][3])(Data &, Data &) = {
    {&Data::swapArrayArray, &Data::swapArrayText, &Data::swapArrayNum},
    {&Data::swapArrayText, &Data::swapTextText, &Data::swapTextNum},
    {&Data::swapArrayNum, &Data::swapTextNum, &Data::swapNumNum}
};                      // swaping a with b is the same as swaping b with a

inline void Data::destroy(Field type)
{
    (this->*s_destroy[type])();
}

inline void Data::copy(Field type, Data const &other)
{
    (this->*s_copy[type])(other);
}

inline void Data::move(Field type, Data &&tmp)
{
    (this->*s_move[type])(std::move(tmp));
}

inline void Data::swap(Field type1, Field type2, Data &obj1, Data &obj2)
{
    (this->*s_swap[type1][type2])(obj1, obj2);
}

inline void Data::destroyArray()
{
    delete[] u_double;
}

inline void Data::destroyText()
{
    u_word.~basic_string();
}

inline void Data::destroyNum()
{
    u_value = 0;
}

inline void Data::copyArray(Data const &obj)
{
    u_double = obj.array();
}

inline void Data::copyText(Data const &obj)
{
    u_word = obj.word();
}

inline void Data::copyValue(Data const &obj)
{
    u_value = obj.value();
}

inline void Data::moveArray(Data &&tmp)
{
    u_double = std::move(tmp.array());
}

inline void Data::moveText(Data &&tmp)
{
    u_word = std::move(tmp.word());
}

inline void Data::moveNum(Data &&tmp)
{
    u_value = std::move(tmp.value());
}

inline void Data::swapArrayArray(Data &obj1, Data &obj2)
{
    std::swap(obj1.u_double, obj2.u_double);
}

inline void Data::swapTextText(Data &obj1, Data &obj2)
{
    std::swap(obj1.u_word, obj2.u_word);
}

inline void Data::swapNumNum(Data &obj1, Data &obj2)
{
    std::swap(obj1.u_value, obj2.u_value);
}

#endif