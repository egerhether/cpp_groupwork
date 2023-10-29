#include "numbers.ih"

void Numbers::write(std::ostream& os) {
    for (int i = 0; i < size; ++i) {
        os << data[i] << ' ';
    }
    os << std::endl;
}