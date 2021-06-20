#pragma once

#include <string>
#include <vector>
#include <Manifest.h>

namespace SimGet::Repository {

    Manifest* SearchForSingle(std::string RepositoryUrl, std::string PackageIdentifier);

    Manifest* SearchForSingle(std::string PackageIdentifier);

}