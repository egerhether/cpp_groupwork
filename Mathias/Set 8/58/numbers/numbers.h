#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>

class Numbers
{
public:
                            // constructors
    Numbers(int count, int value) : size(count) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = value;
        }
    }

    Numbers(int count) : size(count) {
        data = new int[size];
    }

    Numbers(Numbers &&other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    Numbers(const Numbers& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    ~Numbers() {
        delete[] data;
    }
                            // helper functions
    int& at(int index);
    void write(std::ostream& os);
    int length() const;

                            // assignments
    Numbers& operator=(const Numbers& other); 
    Numbers& operator=(Numbers&& other) noexcept;

private:
    int *data;
    int size;
};

#endif
