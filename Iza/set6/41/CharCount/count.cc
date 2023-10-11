#include "CharCount.ih"

void CharCount::count(std::istream &stream)
{
    char c;

    while(stream.get(c)) // while there's another character
    {    
        if (d_charInfo.nCharObj >= capacity())
            enlarge();    
        
        bool found = false;      
        for (size_t idx = 0; idx != d_charInfo.nCharObj+1; ++idx)
        {
            if(d_charInfo.ptr[idx].ch == c)
            {
                ++d_charInfo.ptr[idx].count;
                found = true;
                break;
            }
            if (d_charInfo.ptr[idx].ch > c)
            {
                insert(c, idx);
                found = true;
                break;
            } 
        }
        if (!found)
            append(c, d_charInfo.nCharObj-1);
    }
    
}