#include "main.ih"

int main()
{
    Filter filter(cin);                 // filters out initial and final 
                                        // empty lines

    filter.display();                   // show the remaining lines to cout
}
