#include <fstream>

using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    ofstream out1 {"/home/petros/Documents/CPP_I/Petros/set7/50/tmp/out1"};
    hello(out1);

    fstream out2 {"/home/petros/Documents/CPP_I/Petros/set7/50/tmp/out2", ios::out};
    hello(out2);
}
