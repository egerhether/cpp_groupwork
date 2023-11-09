#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "standard constructor\n";
    };

    Demo(Demo const &other)
    {
        cout << "copy constructor\n";
    };

    Demo(Demo &&tmp)
    {
        cout << "move constructor\n";
    };

    Demo &operator=(Demo &&tmp)
    {
        cout << "move assignment\n";
        return *this;
    };


    Demo &operator=(Demo const &other)
    {
        cout << "copy assignment\n";
        return *this;
    };
};

Demo factory()
{
    cout << "factory call\n";
    Demo object;
    cout << "factory end\n";
    return object;
};

void fun(Demo const &other)
{
    cout << "fun call\n";
    cout << "fun end\n";
}

int main()
{
    Demo demo;                              // standard
    Demo demo2(demo);                       // copy constructor
    demo2 = demo;                           // copy assignment
    Demo demo3(std::move(demo2));           // move constructor
    demo3 = factory();                      // move assignment

    // copy elision situation
    fun(factory());
}
