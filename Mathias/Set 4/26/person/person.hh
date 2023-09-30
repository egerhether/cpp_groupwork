#ifndef PERSON_HH
#define PERSON_HH
#include <iostream>
#include <string>

using namespace std;

class Person
{
    string d_name;         // name of the person
    string d_address;      // the address 
    string d_phone;        // telephone number
    size_t d_mass;         // the mass (in kg)

public:                     // member functions
    void setName(const string& name);
    void setAddress(const string& address);
    void setPhone(const string& phone);
    void setMass(size_t mass);

    const string& name() const;
    const string& address() const;
    const string& phone() const;
    size_t mass() const;
                            // Member function to insert person's information into an ostream
    void insert(std::ostream& os) const;
                            // Member function to extract person's information from an istream
    void extract(std::istream& is);
};

#endif