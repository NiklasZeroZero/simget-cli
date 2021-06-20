#include <iostream>

#include <Repository.h>

//  Update one/all installed packages
//      Syntax:                 'simget update [<PackageIdentifier>]'

namespace SimGet::CLI::Command::UpdateCommand {

    int execute(int argc, char *argv[]) {
        std::cout << "simget: This command is currently unsupported." << std::endl;
        return 0;
    }

}