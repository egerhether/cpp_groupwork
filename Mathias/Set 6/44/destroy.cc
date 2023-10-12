#include "strings.ih"

void Strings::destroy() {
    if (d_str) {
        for (size_t i = 0; i < d_size; ++i) {
            delete d_str[i];  // deallocate each string
        }
        delete[] d_str;  // deallocate the array of pointers
        d_str = nullptr;
    }
}