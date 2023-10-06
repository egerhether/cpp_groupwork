#include "main.ih"

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        CopyCat obj = CopyCat(argc, argv);
        obj.getData();
    }
    else
    {
        CopyCat obj1 = CopyCat();
        obj1.getData();

        cout << '\n';

        char* data[] = { new char[6]{"Hello"}, new char[6]{"World"}, nullptr};

        CopyCat obj2 = CopyCat(data);
        obj2.getData();
    }
}
