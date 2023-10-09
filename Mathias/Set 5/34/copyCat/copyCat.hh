#ifndef COPYCAT_H_
#define COPYCAT_H_

// class for CopyCat object

#include <iostream>
#include <cstring> // For strdup


class CopyCat 
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();
        CopyCat(int argc, char **argv);
        CopyCat(char **data);

    private:
        size_t countElements(char **str); // count the elements
};

#endif