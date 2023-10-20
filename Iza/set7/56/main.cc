#include "main.ih"

int main(int argc, char **argv)
{
    if (argc < 3)
        return usage(argv[0]);

    Encryption encryption(argc, argv, usage);
    return encryption.process();
}
