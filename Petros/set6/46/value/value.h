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
    private:
};

// INLINE FUNCTIONS 
// typeValue() functions and token() function

// intValue()
inline int Value::intValue() const
{

    return d_value.u_int;
}

inline void Value::intValue(int value)
{
    d_type = INT;
    d_value.u_int = value;
}

//doubleValue()
inline double Value::doubleValue() const
{
    return d_value.u_double;
}

inline void Value::doubleValue(double value)
{
    d_type = DOUBLE;
    d_value.u_double = value;
}

//charValue()
inline char Value::charValue() const
{
    return d_value.u_char;
}

inline void Value::charValue(char value)
{
    d_type = CHAR;
    d_value.u_char = value;
}

//token
inline Token Value::token() const
{
    return d_type;
}

#endif
