#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cstring>
#include <string>

using namespace std;

                        // a process record
struct AcctRecord
{
    char ac_comm[8];    // command name
    char ac_flag;       // flags
    int ac_exitcode;    // exit code
};

                    // signal numbers to signal name
const unordered_map<int, string> signalMap =
{
    {15, "TERM"},
    {9, "KILL"}
};

string GetSignal(int signalNumber);
int processData(const string &path, bool showAll);