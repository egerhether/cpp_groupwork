#include "person.ih"

void Person::extract(std::istream &istream)
{
    std::string input;
    
    for (size_t idx = 0; idx != 4; ++idx)
    {
        std::getline(istream, input,',');
        switch(idx)
        {
            case 0:
            setName(input);
            break;

            case 1:
            setAddress(input);
            break;

            case 2:
            setPhone(input);
            break;

            case 3:
            setMass(std::stoul(input));
            break;
        }
    }
}