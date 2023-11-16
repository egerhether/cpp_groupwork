#include <fstream>

using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    ofstream out1{ "/tmp/out1" };
    hello(out1);

    fstream out2{ "/tmp/out2" , out2.out};
    hello(out2);
}