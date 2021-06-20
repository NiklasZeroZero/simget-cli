#include <iostream>
#include <string>
#include <vector>

#include <Manifest.h>

namespace SimGet::Repository {
    
    std::vector<std::string> RepositoryUrls = {
        "https://github.com/NiklasZeroZero/simget-pkgs.git"
    };

    Manifest* SearchForSingle(std::string RepositoryUrl, std::string PackageIdentifier) {
        return NULL;
    };

    Manifest* SearchForSingle(std::string PackageIdentifier) {

        for( int i = 0; i < RepositoryUrls.size(); i++ ) {

            std::string RepositoryUrl = RepositoryUrls[i];

            std::cout << "Searching for package " << PackageIdentifier << " in repository " << RepositoryUrl << std::endl;

            Manifest* manifest = SearchForSingle( RepositoryUrl, PackageIdentifier );
            if( manifest == NULL )
                continue;
            return manifest;

        }

        return NULL;

    };

}