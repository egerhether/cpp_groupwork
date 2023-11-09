#include "numbers.ih"

int& Numbers::at(int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Error: Index out of range." << std::endl;
        // You can handle this error as needed
        // For now, we just print an error message
    }
    return data[index];
}