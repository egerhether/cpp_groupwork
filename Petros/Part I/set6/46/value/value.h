#ifndef INCLUDED_VALUE_
#define INCLUDED_VALUE_
#include "../enum/enum.h"

union Uvalue
{
    int u_int;
    double u_double;
    char u_char;
};

class Value
{
    Uvalue d_value;
    Token d_type;

    public:


        Value();
        Value(int value);
        Value(double value);
        Value(int index, char identifier);
        
        int intValue()                      const;
        void intValue(int value);
        
        double doubleValue()                const;
        void doubleValue(double value);
        
        char charValue()                    const;
        void charValue(char value);
   
        Token token()                       const;

        void requireSpecial(Token token);
};

// INLINE FUNCTIONS 
// typeValue() functions and token() function

// intValue()
inline int Value::intValue() const
{
    return d_value.u_int;
}

//doubleValue()
inline double Value::doubleValue() const
{
    return d_value.u_double;
}

//charValue()
inline char Value::charValue() const
{
    return d_value.u_char;
}

//token
inline Token Value::token() const
{
    return d_type;
}

#endif
