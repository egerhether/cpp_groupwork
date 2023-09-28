#include "main.ih"

int main(int argc, char **argv)
{
    Person array[5]; 

    readData(array,5);
    writeData(array,5);
    cout << array[2].address();
}
