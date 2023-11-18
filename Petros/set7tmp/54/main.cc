#include "main.ih"

int main()
{
    cout << "what's the path of the file you want to lock?\n";
    string myPath;
    cin >> myPath;
    Lock myLock(myPath);
                                // if invalid quit
    if (!myLock.valid())
    {
        cout << "something went wrong locking the file, try again.\n"; 
        return 1;
    }
                        // ofstream writing to file
    ofstream out(myPath);

                        // run until we type quit
    while (true)
    {
        cout << '?';
        out.clear();
        string insertion;
        cin >> insertion;
        if (insertion == "quit")
            break;
        out << insertion << '\n';
    }
}
