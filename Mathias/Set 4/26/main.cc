#include "main.ih"

int main()
{
                    // Create a Person object
    Person person;

                    // User input directions
    cout << "Enter person information (name,address,phone,mass): ";

                    // Call the extract function to read and populate the object
    person.extract(cin);

                    // Display the information
    cout << "\nPerson Information:\n";
    cout << "Name: " << person.name() << "\n";
    cout << "Address: " << person.address() << "\n";
    cout << "Phone: " << person.phone() << "\n";
    cout << "Mass: " << person.mass() << " kg\n";
}
