#include <iostream>
#include <string>

namespace SimGet {

    int versionCode = 1;
    std::string versionName = "0.0.1";

    namespace CLI {

        void printHelp() {

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
        }

        int main(int argc, char *argv[]) { 

            if( argc <= 1 ) {
                printHelp();
                return 0;
            }

            std::string command = argv[1];

            if( command == "version" || command == "--version" || command == "v" ) {
                std::cout << "simget version " << SimGet::versionName << std::endl;
                return 0;
            }

            if( command == "help" || command == "--help" || command == "?" ) {
                printHelp();
                return 0;
            }

            if( command == "search" ) {
                std::cout << "simget: This command is currently unsupported." << std::endl;
                return 0;
            }

            if( command == "show" ) {
                std::cout << "simget: This command is currently unsupported." << std::endl;
                return 0;
            }

            if( command == "install" ) {
                std::cout << "simget: This command is currently unsupported." << std::endl;
                return 0;
            }

            if( command == "export" ) {
                std::cout << "simget: This command is currently unsupported." << std::endl;
                return 0;
            }

            if( command == "import" ) {
                std::cout << "simget: This command is currently unsupported." << std::endl;
                return 0;
            }

            std::cout << "simget: '" << command << "' is not a simget command. See 'simget help'." << std::endl;
            return 0;

        }

    }

}