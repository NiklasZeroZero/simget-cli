#include <iostream>

//  Install a package using its PackageIdentifier
//      Syntax:                 'simget install <PackageIdentifier>'

namespace SimGet::CLI::Command::InstallCommand {

    int execute(int argc, char *argv[]) {
        std::cout << "simget: This command is currently unsupported." << std::endl;
        return 0;
    }

}