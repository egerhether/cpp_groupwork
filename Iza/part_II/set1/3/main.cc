#include <iostream>
#include <filesystem>

using namespace std;

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        cerr << "Please provide 2 arguments: file to copy" 
             << " and filepath to save copied file\n";
    return 1;
    }

    const string sourceFile = argv[1];
    const string copyFile = argv[2];

    filesystem::copy_file(sourceFile, copyFile);        // copy the file

                                                        // save the timestamp
    filesystem::file_time_type timestamp = 
                                filesystem::last_write_time(sourceFile);

    filesystem::last_write_time(copyFile, timestamp);
}