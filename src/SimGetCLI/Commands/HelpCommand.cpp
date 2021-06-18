#include <iostream>

namespace SimGet::CLI::Command::HelpCommand {

    int main(int argc, char *argv[]) {
        std::cout
                << "usage: simget <command> [<args>]\n\n"
                << "These are all possible simget commands:\n\n"
                << "version         Display information about the installed version of simget\n"
                << "help            Display this help information\n"
                << "search          Serach your installed repositories for a package by metadata\n"
                << "show            Display Information about a package\n"
                << "install         Install a Package\n"
                << "export          export your currently installed Packages into a file\n"
                << "import          import all packages from file \n"
                << std::endl; 
        return 0;
    }

}