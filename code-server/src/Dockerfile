FROM codercom/code-server

USER coder
RUN sudo apt update && \
    sudo apt install -y wget curl && \
    sudo DEBIAN_FRONTEND=noninteractive apt install -y build-essential g++ gdb && \
    sudo rm -rf /var/lib/apt/lists/*

RUN curl -L https://github.com/microsoft/vscode-cpptools/releases/download/1.5.1/cpptools-linux.vsix --output cpptools-linux.vsix && \
    code-server --install-extension cpptools-linux.vsix
