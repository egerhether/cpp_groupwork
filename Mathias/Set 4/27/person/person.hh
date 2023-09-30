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
                            // function to insert info to stream
    void insert(std::ostream& os) const;
                            // function to extract info to stream
    void extract(std::istream& is);
                            // function to read in the data of a given # of persons
    static void readData(Person persons[], size_t size);
                            // function to output the data of a given # of persons
    static void outputData(Person persons[], size_t size);
};

#endif