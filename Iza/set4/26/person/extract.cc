#include "person.ih"

void Person::extract(std::istream &istream)
{
    size_t idx = 0;
    std::string input;

    while (std::getline(istream, input,','))
    {
        switch(idx % 4)
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
        ++idx;
    }
}