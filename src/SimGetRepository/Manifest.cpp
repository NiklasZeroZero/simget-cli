#include <iostream>
#include <string>
#include <stdio.h>

#include <yaml.h>

#include <Manifest.h>

namespace SimGet::Repository {

    Manifest::Manifest(FILE *fh) {

        yaml_parser_t parser;

        /* Initialize parser */

        if( !yaml_parser_initialize(&parser) ) {
            std::cout << "Could not initialise YAML parser." << std::endl;
            return;
        }
    
        if(fh == NULL) {
            std::cout << "Failed to open file." << std::endl;
            return;
        }

        /* Set input file */
        yaml_parser_set_input_file(&parser, fh);

        /* Parse File */

        /* Cleanup */
        yaml_parser_delete(&parser);
        fclose(fh);

    }

    void Manifest::PrintToScreen() {

        std::cout
        << "Manifest for '" << PackageIdentifier << "':\n\n"
        << "PackageIdentifier: " << PackageIdentifier
        << "PackageVersion:" << PackageVersion
        << std::endl;

    }

}