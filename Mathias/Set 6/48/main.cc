#include "main.ih"

int main()
{
    DH aliceInstance(ALICE, "socketName", "bobPublicFileName");
    DH bobInstance(BOB, "bobPublicFileName", "alicePublicFileName");
}