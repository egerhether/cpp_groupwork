#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>

class Person
{
    std::string d_name;             // Name of the person
    std::string d_address;          // Address of person
    std::string d_phone;            // Phone of person
    size_t      d_mass;             // Weight in kg   

    public:
        Person();
                                // Member functions
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass = 0);

        void insert(std::ostream &data)     const;
        void extract(std::istream &data);

        std::string const &name()           const;
        std::string const &address()        const;
        std::string const &phone()          const;
        size_t mass()                       const;
        void printPerson(Person const &p)   const;

    private:
        bool hasOnly(char const *characters, std::string const &object);

};
        
#endif
