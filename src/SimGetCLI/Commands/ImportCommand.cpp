#include <iostream>

//  Import (install) all packages declared in file
//      Syntax:                 'simget import [-o <import-file>]'
//      Default import-file:    '<config.modsdir>/export.json'

namespace SimGet::CLI::Command::ImportCommand {

    int execute(int argc, char *argv[]) {
        std::cout << "simget: This command is currently unsupported." << std::endl;
        return 0;
    }

}