#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    if (argc == 1)              // thris program needs an arguement
        return 1;               // when no args given
    
    size_t iterations = stoll(argv[1]); // first arguement is the iterations no

    ostream out(cout.rdbuf());
    out.setstate(ios::failbit);

    while(iterations--)
    {
        if (out.good())
            out << "Nr. of command line arguements " << argc << '\n';
    }
}
