#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_
#include <string>

class Person
{
    public:
        Person();                                // maube do what they did in 7.3.1??
        Person(std::string name, 
               std::string address = "--unknown--",
               std::string phone = "--unknown--",
               size_t mass = 0);

                                // Member functions
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass);

        void insert(std::ostream)           const;
        void extract(std::istream)          const;

        std::string const &name()           const;
        std::string const &address()        const;
        std::string const &phone()          const;
        size_t mass()                       const;
        void printPerson(Person const &p)   const;

    private:
        bool hasOnly(char const *characters, std::string const &object);

        std::string d_name;             // Name of the person
        std::string d_address;          // Address of person
        std::string d_phone;            // Phone of person
        size_t      d_mass;             // Weight in kg   
};
        
#endif
