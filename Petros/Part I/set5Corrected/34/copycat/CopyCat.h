#ifndef COPYCAT_H_
#define COPYCAT_H_

#include <iostream>

class CopyCat 
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();
        CopyCat(int argc, char **argv);
        CopyCat(char **data);

    private:

        size_t elements(char **str);
        void copyString(char *dest, char *src) ;

};

#endif
