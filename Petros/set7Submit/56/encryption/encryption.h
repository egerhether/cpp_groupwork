#ifndef ENCRYPTION_H_
#define ENCRYPTION_H_

#include <string>

class Encryption
{
    std::string d_pwd; 
    char d_mode;
    std::string d_in;
    std::string d_out;
    std::string d_progname;

    public:

        Encryption(int argc, char **argv, 
                   int (*usage)(std::string const &progname));
        ~Encryption();

        int process();

    private:

        std::string passwd();

        void (*mode())(std::istream &, std::ostream &, 
                                                    size_t, std::string);

        static void encrypt(std::istream &in, std::ostream &out, 
                                        size_t length, std::string pass);
        static void decrypt(std::istream &in, std::ostream &out, 
                                        size_t length, std::string pass);

        static void endecrypt(std::istream &in, std::ostream &out, 
                char (*operation)(char,char), size_t length, std::string pass);

        static char add(char a, char b);
        static char sub(char a, char b);

        static std::string convert(std::string in, char (*operation)(char,char), 
                                            size_t length, std::string pass);

        int (*usage)(const std::string &progname);

        std::string extend(std::string str);
        



};

#endif