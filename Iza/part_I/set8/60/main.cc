#include <iostream>

class Demo
{
    public:
        Demo()
        {
            std::cout << "standard constructor\n";
        };

        Demo(Demo const &other)
        {
            std::cout << "copy constructor\n";
        };
        Demo(Demo &&tmp)
        {
            std::cout << "move constructor\n";
        };

        Demo &operator=(Demo const &other)
        {
            std::cout << "copy assignment\n";
            return *this;
        };
        Demo &operator=(Demo &&tmp)
        {
            std::cout << "move assignment\n";
            return *this;
        };
};


Demo factory()
{
    std::cout << "factory call\n";
    Demo object;
    std::cout << "factory end\n";
    return object;
};

void fun(Demo const &other)
{
    std::cout << "fun call\n";
    std::cout << "fun end\n";
}

int main()
{
    Demo demo;                              // standard constructor
    Demo demo2(demo);                       // copy constructor
    demo2 = demo;                           // copy assignment
    Demo demo3(std::move(demo2));           // move constructor
    demo3 = factory();                      // move assignment

    // copy elision situation
    fun(factory());
    // through copy elision the compiler may create the return value of 
    // factory() directly in place of the fun's other parameter.

}