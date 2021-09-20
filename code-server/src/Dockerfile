FROM codercom/code-server:3.11.1

USER coder

# install compiler
RUN sudo apt update && \
    sudo apt install -y wget curl && \
    sudo DEBIAN_FRONTEND=noninteractive apt install -y build-essential g++ gdb && \
    sudo rm -rf /var/lib/apt/lists/*

# install cmake
RUN sudo apt update && \
    sudo apt install -y libssl-dev && \
    wget https://github.com/Kitware/CMake/releases/download/v3.21.2/cmake-3.21.2.tar.gz && \
    tar xvf cmake-3.21.2.tar.gz && \
    cd cmake-3.21.2 && \
    ./bootstrap --parallel=8 && \
    make -j && \
    sudo make install && \
    cd ../ && \
    rm -rf cmake-3.21.2 cmake-3.21.2.tar.gz && \
    sudo rm -rf /var/lib/apt/lists/*

# install vscode extension
RUN curl -L https://github.com/microsoft/vscode-cpptools/releases/download/1.5.1/cpptools-linux.vsix --output cpptools-linux.vsix && \
    code-server --install-extension cpptools-linux.vsix && \
    rm -rf cpptools-linux.vsix
