#include <iostream>

//  Export the currently installed packages into a file
//      Syntax:                 'simget export [-o <export-file>]'
//      Default export-file:    '<config.modsdir>/export.json'

namespace SimGet::CLI::Command::ExportCommand {

    int execute(int argc, char *argv[]) {
        std::cout << "simget: This command is currently unsupported." << std::endl;
        return 0;
    }

}