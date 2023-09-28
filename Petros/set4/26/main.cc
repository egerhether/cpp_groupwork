#include "main.ih"

int main()
{
    Person p("Petros Charagkionis");
    p.Person::printPerson(p);
    p.Person::setAddress("hello");
    p.Person::setAddress("hello@gmail.com");
    p.Person::address();
    p.Person::printPerson(p);
    
    std::cout << p.Person::insert(std::cout);
}
