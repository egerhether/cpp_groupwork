#include "main.ih"

int main(int argc, char* argv[])
{
    bool showAll = false;
    string pacctFile;

    // Parse command line arguments
    if (argc == 3 && string(argv[1]) == "-a") {
        showAll = true;
        pacctFile = argv[2];
    } else {
        pacctFile = argv[1];
    }

    return processData(pacctFile, showAll);
}
