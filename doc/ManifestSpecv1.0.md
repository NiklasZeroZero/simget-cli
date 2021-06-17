
Table of Contents
----------------------------------
YAML Specification
   1) YAML file name and folder structure
   2) YAML Syntax
   3) Minimal singleton YAML file example
   4) Best Practices

# YAML Specification

## YAML file name and folder structure
YAML files shall be added to the repository with the following folder structure:
manifests / p / publisher / package / packageVersion / publisher.package.manifestFile.yaml

Example:
manifests / n / NiklasZeroZero / SimGetGui / 1.0.0.0 / NiklasZeroZero.SimGetGui.yaml

* Manifests are partitioned by the first letter of the publisher name (in lower case). For example: n.
* Publisher folder is the name of the company that publishes the tool.  For example: NiklasZeroZero.
* The child folder package is the name of the application or tool.  For example: SimGetGui.
* The child folder package version is the version of the package. For example: 1.0.0.0.
* The filename must be a combination of the publisher name and the application name.  For example: NiklasZeroZero.SimGetGui.yaml.

The publisher and application folders MUST match the values used to define the Id.  See PackageIdentifier: in the YAML for more detail.
The version in the folder name MUST match the version field value in the YAML file.  See PackageVersion: in the YAML for more detail.

There is one type of manifests. A single file manifest (singleton). 
[JSON schemas](https://github.com/NiklasZeroZero/simget-cli/schemas/JSON/manifests/v1.0.0) have been provided 
to help strongly type attributes and requirements.

## YAML Syntax
Each field in the file must be PascalCased and cannot be duplicated.

## Minimal singleton YAML file example
As specified in the [singleton JSON schema](https://github.com/NiklasZeroZero/simget-cli/schemas/JSON/manifests/v1.0.0/manifest.singleton.1.0.0.json),
only a number of fields are required. The minimal supported YAML file would look like the example below. The singleton format is only valid for packages containing
a single installer and a single locale.

The partitioning scheme was added to help with GitHub's UX. Folders with thousands of children do not render well in the browser.

Path: manifests / n / NiklasZeroZero / SimGetGui / 1.0.0.0 / NiklasZeroZero.SimGetGui.yaml

```YAML
PackageIdentifier: "NiklasZeroZero.SimGetGui.yaml"
PackageVersion: "1.0.0.0"
PackageLocale: "en-US"
Publisher: "NiklasZeroZero"
PackageName: "SimGet GUI"
License: "MIT"
ShortDescription: "A Graphical Implemetation of the simget Application into the The Sims 4 Main Menu"
Installers: 
 - InstallerUrl: "TODO"
   InstallerSha256: TODO
ManifestType: "singleton"
ManifestVersion: "1.0.0"
```

## Best Practices
The package identifier must be unique.  You cannot have multiple submissions with the same package identifier. Only one pull request per package version is allowed.

Avoid creating multiple publisher folders.  For example, do not create "Contoso Ltd." if there is already a "Contoso" folder.

Provide as many fields as possible.  The more meta-data you provide the better the user experience will be. In some cases, the fields may not yet be supported
by the **The Sims 4 Community Mod Manager Clien**.

The length of strings in this specification should be limited to 100 characters before a line break.