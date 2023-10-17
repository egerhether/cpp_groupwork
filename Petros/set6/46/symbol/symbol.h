#ifndef INCLUDED_SYMBOL_
#define INCLUDED_SYMBOL_
#include "../value/value.h"
#include <string>

class Symbol
{
    std::string d_name;
    Value d_Value;

    public:
        enum Compare
        {
            LHS_FIRST,
            RHS_FIRST,
            EQUAL
        };

        Symbol();
        Symbol(std::string name, int value);
        Symbol(std::string name, double value);
       
        std::string const &ident()                  const;
        int intValue()                              const;
        double doubleValue()                        const;
        Token type()                                const;
        Value const &rawValue()                     const;

        Compare compare(std::string identifier)     const;
        void assign(Value const &value);
    private:
};

// INLINE FUNCTIONS

//intValue(), doubleValue() and rawValue()
inline int Symbol::intValue() const
{
    return d_Value.intValue();
}

inline double Symbol::doubleValue() const
{
    return d_Value.doubleValue();
}

inline Value const &Symbol::rawValue() const
{
    return d_Value;
}

//type() and ident()
inline Token Symbol::type() const
{
    return d_Value.token();
}

inline std::string const &Symbol::ident() const
{
    return d_name;
}
#endif 
