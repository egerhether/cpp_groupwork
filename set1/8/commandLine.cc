# include <string>
# include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "hello " << ((argc == 1) ? "world" : 
        ((argc == 2) ? argv[1] : argv[std::stoul(argv[1])])) << '\n';

}

