#include "person.ih"

void Person::extract(istream &data)
{
    string input;
    
    for (size_t idx = 0; idx != 4; ++idx)
    {
        getline(data, input, ',');
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
            setMass(stoi(input));
            break;
        }
    }
}
