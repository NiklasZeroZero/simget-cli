#include <iostream>
#include <Config.h>

namespace SimGet::CLI::Command::VersionCommand {

    int main(int argc, char *argv[]) {
        std::cout << "simget version " << SimGet::versionName << std::endl;
        return 0;
    }

}