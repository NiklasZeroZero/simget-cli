# Welcome to the The Sims 4 Community Mod Manager Client repository

This repository contains the source code for the **The Sims 4 Community Mod Manager Client**.

The packages available to the client are in the [Community repo](https://github.com/NiklasZeroZero/simget-pkgs).

> The **The Sims 4 Community Mod Manager** project is in Preview. We welcome all feedback, and that feedback might lead to big (maybe even breaking) changes.

## Installing the client

> The client requires Windows 10 1809 (build 17763) or later at this time.

## Overview  

### Client Repository
This winget-cli repository includes the source code designed to build the client.  You are encouraged to participate in the development of this client.

### Sources
The client is built around the concept of sources; a set of packages effectively. Sources provide the ability to discover and retrieve the metadata about the packages, so that the client can act on it.

The default source reflects that data available from the [Community repo](https://github.com/NiklasZeroZero/simget-pkgs).

We plan to better support additional sources, and additional types of sources, in the future. For now, additional sources can be configured, but only one used at a time.

### Package Manager Service 
The **Package Manager Service** is responsible for approving Pull Requests.  It validates the YAML and [manifest spec](/doc/ManifestSpecv1.0.md) for spec compliance.

## Building the client

TODO

## Contributing

This project welcomes contributions and suggestions. Most contributions require you to agree to a Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us the rights to use your contribution.

When you submit a pull request, a CLA bot will automatically determine whether you need to provide a CLA and decorate the PR appropriately (e.g., status check, comment). Simply follow the instructions provided by the bot. You will only need to do this once across all The Sims 4 Community Mod Manager repositories using our CLA.

For the avoidance of doubt, you may not make any Submissions linking to third party materials if such Submission is prohibited by the applicable third party and/or otherwise violates such third party's rights.
