#include <iostream>

#include <Repository.h>

//  Print information of a package using its PackageIdentifier
//      Syntax:                 'simget show <PackageIdentifier>'

namespace SimGet::CLI::Command::ShowCommand {

    int execute(int argc, char *argv[]) {

        if( argc <= 2 ) {
            std::cout << "simget: no PackageIdentifier provided. See 'simget help show'." << std::endl;
            return 0;
        }

        SimGet::Repository::Manifest* manifest = SimGet::Repository::SearchForSingle( argv[2] );

        if( manifest == NULL ) {
            std::cout << "simget: cannot find package '" << argv[2] << "'. Are you sure the package exists?" << std::endl;
            return 1;
        }

        manifest->PrintToScreen();
        return 0;
    }

}