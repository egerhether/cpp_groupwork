//  Main2.cpp
#include <iostream>
#include <chrono>

int main(int argc, char *argv[]) {
                            // get the number of iterations from command line
    int niterations = std::stoi(argv[1]);
                            // initialize the ostream 
    std::ostream out(std::cout.rdbuf());
                            // set to failbit
    out.setstate(std::ios::failbit);
                            // measure the time
    auto start = std::chrono::high_resolution_clock::now();
                            // the iteration loop
    for (int i = 0; i < niterations; ++i)
    {
                             // version 2 with prefix
        if (out.good())
            out << "Nr. of command line arguments " << argc << '\n';
    }

                            // stop the time
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Execution time: " << elapsed.count() << " seconds\n";

    return 0;
}
