#include "process.ih"

string GetSignal(int signalNumber)
{
    auto it = signalMap.find(signalNumber);
    return (it != signalMap.end()) ? it->second : to_string(signalNumber);
}
