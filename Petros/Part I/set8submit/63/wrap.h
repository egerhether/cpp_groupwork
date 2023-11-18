#include <cstddef>
#include <string>
#include <iostream>
#include <stdexcept>
#include "data.h"
using namespace std;

union Data;                 // declaration of the union Data

class Wrap
{
public:
                            // initializing with a size_t value.
    inline Wrap(size_t value) : activeField_(FieldType::Size)
    {
        d_data = new Data;
        d_data->s = value;   // store the size_t value in the union.
        setActiveFieldType(FieldType::Size);
    }

                            // initializing with a string.
    inline Wrap(const string &word) : activeField_(FieldType::Word)
    {
        d_data = new Data;
        new (&d_data->w) string(word); 
        setActiveFieldType(FieldType::Word);
    }

                            // initializing array of doubles
    inline Wrap(double values[]) : activeField_(FieldType::Double)
    {
        d_data = new Data;
        new (&d_data->d) double[sizeof(values) / sizeof(values[0]);
        for (size_t i = 0; i < sizeof(values) / sizeof(values[0]); ++i)
            d_data->d[i] = values[i]; 
        setActiveFieldType(FieldType::Double);
    }

                                        // destructor
    inline ~Wrap() 
    {
        switch (activeField_)
        {
            case FieldType::Size:
                break;
            case FieldType::Word:
                d_data->w.~basic_string();
                break;
            case FieldType::Double:
                delete[] d_data->d; // delete the array
                break;
        }
        delete d_data;              // delete the union
    }

                                   // accessing the size_t value
    size_t value() const
    {
        if (activeField_ == FieldType::Size)
            return d_data->s;
        throw runtime_error("field not 'Size'");
    }

                                   // accessing the word value
    const string& word() const
    {
        if (activeField_ == FieldType::Word)
            return d_data->w;
        throw runtime_error("field not 'Word'");
    }

                                   // accessing the double
    const double* data() const
    {
        if (activeField_ == FieldType::Double)
            return d_data->d;
        throw runtime_error("field not 'Double'");
    }

                                  // enum representing the possible field types.
    enum class FieldType 
    { 
        Size, 
        Word, 
        Double 
    };

                                // accessor for getting the active field type.
    FieldType activeField() const;

private:
    FieldType activeField_;
    Data *d_data;

                                // setting the type
    void setActiveFieldType(FieldType field);
};

inline void Wrap::setActiveFieldType(FieldType field)
{
    activeField_ = field;
}