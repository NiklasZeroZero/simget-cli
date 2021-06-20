#pragma once

#include <string>

namespace SimGet::Repository {

    class Manifest {

        private:
            std::string PackageIdentifier;
            std::string PackageVersion;

        public:
            Manifest(FILE *fh);
            void PrintToScreen();

            std::string GetPackageIdentifier() { return PackageIdentifier; };
            std::string GetPackageVersion() { return PackageVersion; };

    };

}