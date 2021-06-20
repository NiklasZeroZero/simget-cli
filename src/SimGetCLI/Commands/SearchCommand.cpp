#include <iostream>

//  Search the available repos by multiple metadata. Return its PackageIdentifier
//      Syntax:                 'simget search <search-string>'

namespace SimGet::CLI::Command::SearchCommand {

    int execute(int argc, char *argv[]) {
        std::cout << "simget: This command is currently unsupported." << std::endl;
        return 0;
    }

}