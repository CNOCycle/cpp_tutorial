#!/bin/bash

# install utils
sudo apt update 
sudo apt install -y wget curl

# install g++
DEBIAN_FRONTEND=noninteractive sudo apt install -y build-essential g++ gdb
g++ -v

# install vscode
#curl -L  https://code.visualstudio.com/sha/download?build=stable&os=linux-deb-x64 -o vs_code_amd64.deb
#apt install -y vs_code_amd64.deb
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
sudo install -o root -g root -m 644 packages.microsoft.gpg /etc/apt/trusted.gpg.d/
sudo sh -c 'echo "deb [arch=amd64,arm64,armhf signed-by=/etc/apt/trusted.gpg.d/packages.microsoft.gpg] https://packages.microsoft.com/repos/code stable main" > /etc/apt/sources.list.d/vscode.list'
rm -f packages.microsoft.gpg
sudo apt install -y code

# install extension
curl -L https://github.com/microsoft/vscode-cpptools/releases/download/1.5.1/cpptools-linux.vsix --output cpptools-linux.vsix
code --install-extension cpptools-linux.vsix