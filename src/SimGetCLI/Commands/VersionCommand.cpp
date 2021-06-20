#include <iostream>
#include <Config.h>

//  Print the current Version of simget

namespace SimGet::CLI::Command::VersionCommand {

    int execute(int argc, char *argv[]) {
        std::cout << "simget version " << SimGet::versionName << std::endl;
        return 0;
    }

}