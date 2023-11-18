#ifndef ENCRYPTION_H_
#define ENCRYPTION_H_

#include <string>

class Encryption
{
    std::string d_pwd;  // string containing the password 
    char d_mode;        // 'e' or 'd' to make decision whether to en- or decrypt
    std::string d_in;   // filepath to input file (if given)
    std::string d_out;  // filepath to output file (if given)
    std::string d_progname; // needed for usage

    public:

        Encryption(int argc, char **argv, 
                   int (*usage)(std::string const &progname));
        ~Encryption();

        int process(); // function performing the encryption/decryption in full

    private:

        std::string passwd();
                                            // choice of mode (enc vs dec)
        void (*mode())(std::istream &, std::ostream &, size_t, std::string);

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

        int (*usage)(const std::string &progname);  // pointer to usage func

                                             // function which extends the 
                                             // password if it is between 5 and
                                             // 10 characters
        std::string extend(std::string str);   
        



};

#endif