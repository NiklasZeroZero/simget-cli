#include <iostream>
#include <string>

#include <Commands.h>

namespace SimGet::CLI {

    int main(int argc, char *argv[]) {

        if( argc <= 1 ) {
            return Command::HelpCommand::main(argc, argv);
        }

        std::string command = argv[1];

        if( command == "version" || command == "--version" || command == "v" ) {
            return Command::VersionCommand::main(argc, argv);
        }

        if( command == "help" || command == "--help" || command == "?" ) {
            return Command::HelpCommand::main(argc, argv);
        }

        if( command == "search" ) {
            return Command::SearchCommand::main(argc, argv);
        }

        if( command == "show" ) {
            return Command::ShowCommand::main(argc, argv);
        }

        if( command == "install" ) {
            return Command::InstallCommand::main(argc, argv);
        }

        if( command == "export" ) {
            return Command::ExportCommand::main(argc, argv);
            return 0;
        }

        if( command == "import" ) {
            return Command::ImportCommand::main(argc, argv);
            return 0;
        }

        std::cout << "simget: '" << command << "' is not a simget command. See 'simget help'." << std::endl;
        return 0;

    }

}