#include "main.ih"

int main()
{
    Person p;
    p.Person::printPerson(p);
    p.Person::setAddress("hello");
    p.Person::setAddress("hello@gmail.com");
    p.Person::address();
    p.Person::printPerson(p);
    std::cout << "insert function test\n";
    p.Person::insert(std::cout);
}
