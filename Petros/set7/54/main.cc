#include "main.ih"

int main()
{
    string myPath = "/home/petros/Desktop/testing/test";
    Lock myLock(myPath);
    ofstream out(myPath);
    
    while (true)
    {
        myLock.valid();
        
        cout << '?';
        out.clear();

        string insertion;
        getline(cin, insertion);
        if (insertion == "quit")
            break;
        
        out << insertion << '\n';
    }
}
