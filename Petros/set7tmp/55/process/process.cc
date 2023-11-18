#include "process.ih"

int processData(const string &path, bool showAll) 
{
    ifstream file(path, ios::binary);

    if (!file.is_open())   //make sure file is open
        cerr << "There's an rror opening the file." << '\n';

    while (!file.eof()) 
    {
        AcctRecord record;
        file.read((char*)&record, sizeof(record));

        if (!file.gcount()) 
            break;

        if (showAll || record.ac_exitcode != 0) 
        {
            string commandName(record.ac_comm, 8);
            string exitCodeInfo;
            
            if (record.ac_exitcode == 9 || record.ac_exitcode == 15)
                                        // mention the signal name
                exitCodeInfo = GetSignal(record.ac_exitcode);
            else 
                                        // report the exit code
                exitCodeInfo = to_string(record.ac_exitcode);

            cout << "'" << commandName << "' " << exitCodeInfo << '\n';
        }
    }
    file.close();
    return 0;
}
