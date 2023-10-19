#include "person.ih"

void Person::extract(istream &data)
{
    string input;                   // istream will be stored here
                                    // order has to be name address phone mass
   
    std::getline(data, input, ',');
    setName(input);

    std::getline(data, input, ',');
    setAddress(input);
        
    std::getline(data, input, ',');
    setPhone(input);

    std::getline(data, input, ',');
    setMass(stod(input));
}
