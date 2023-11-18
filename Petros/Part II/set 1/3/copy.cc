#include <filesystem>

using namespace fs = filesystem;

int main(int argc, char **argv[])
{
    argc--;

    if (argc != 2)
        return -1;

    string const source = argv[1];
    string const copy = argv[2];

    fs:copy(source, copy);
    fs::file_time_type timestamp =
                               fs::last_write_time(source);

    fs::last_write_time(copy, timestamp);
}
