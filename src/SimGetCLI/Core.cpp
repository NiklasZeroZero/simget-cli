#include <iostream>
#include <string>

#include <Repository.h>

#include <Commands.h>

namespace SimGet::CLI {

    int execute(int argc, char *argv[]) {

        if( argc <= 1 ) {
            return Command::HelpCommand::execute(argc, argv);
        }

        std::string command = argv[1];

        if( command == "version" || command == "--version" || command == "v" ) {
            return Command::VersionCommand::execute(argc, argv);
        }

        if( command == "help" || command == "--help" || command == "?" ) {
            return Command::HelpCommand::execute(argc, argv);
        }

        if( command == "search" ) {
            return Command::SearchCommand::execute(argc, argv);
        }

        if( command == "show" ) {
            return Command::ShowCommand::execute(argc, argv);
        }

        if( command == "update" ) {
            return Command::UpdateCommand::execute(argc, argv);
        }

        if( command == "install" ) {
            return Command::InstallCommand::execute(argc, argv);
        }

        if( command == "export" ) {
            return Command::ExportCommand::execute(argc, argv);
            return 0;
        }

        if( command == "import" ) {
            return Command::ImportCommand::execute(argc, argv);
            return 0;
        }

        std::cout << "simget: '" << command << "' is not a simget command. See 'simget help'." << std::endl;
        return 0;

    }

    int main(int argc, char *argv[]) {
        int exitCode = execute(argc, argv);
        return exitCode;
    }

}