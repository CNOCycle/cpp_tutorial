#!/bin/bash

# install utils
sudo apt update 
sudo apt install -y wget curl

# install g++
sudo DEBIAN_FRONTEND=noninteractive apt install -y build-essential g++ gdb
g++ -v

# install extension
curl -L https://github.com/microsoft/vscode-cpptools/releases/download/1.5.1/cpptools-linux.vsix --output cpptools-linux.vsix
code-server --install-extension cpptools-linux.vsix