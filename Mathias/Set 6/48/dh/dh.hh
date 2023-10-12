enum Type
{
    ALICE,
    BOB
};

class DH
{
public:
    // we use constructor delegation
    DH(std::string const &socket, std::string const &bobPubFname);
    DH(std::string const &bobPubFname, std::string const &AlicePubFname);
    DH(Type type, std::string const &first, std::string const &second);

private:
    void alice(std::string const &socket, std::string const &bobPubFname);
    void bob(std::string const &bobPubFname, std::string const &alicePubFname);
};