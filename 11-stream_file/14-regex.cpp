#include <iostream>
#include <sstream>
#include <string>
#include <regex>

int main()
{

std::string log = R"(
[2021-10-13T14:47:22.050Z] info  code-server 3.11.1 acb5de66b71a3f8f1cc065df4633ecd3f9788d46
[2021-10-13T14:47:22.051Z] info  Using user-data-dir ~/.local/share/code-server
[2021-10-13T14:47:22.059Z] info  Using config file ~/.config/code-server/config.yaml
[2021-10-13T14:47:22.059Z] info  HTTP server listening on http://0.0.0.0:8080
[2021-10-13T14:47:22.059Z] info    - Authentication is enabled
[2021-10-13T14:47:22.059Z] info      - Using password from ~/.config/code-server/config.yaml
[2021-10-13T14:47:22.059Z] info    - Not serving HTTPS
[2021-10-13T14:47:22.185Z] error vscode is not running Error: vscode is not running
    at VscodeProvider.send (/usr/lib/code-server/out/node/vscode.js:121:19)
    at VscodeProvider.sendWebsocket (/usr/lib/code-server/out/node/vscode.js:117:14)
    at async /usr/lib/code-server/out/node/routes/vscode.js:205:5
[2021-10-13T14:47:22.435Z] error vscode is not running Error: vscode is not running
    at VscodeProvider.send (/usr/lib/code-server/out/node/vscode.js:121:19)
    at VscodeProvider.sendWebsocket (/usr/lib/code-server/out/node/vscode.js:117:14)
    at async /usr/lib/code-server/out/node/routes/vscode.js:205:5
 INFO Detected extension installed from another source ms-python.python
 INFO Detected extension installed from another source ms-toolsai.jupyter
[IPC Library: Pty Host]  INFO Persistent process "1": Replaying 30070 chars and 1 size events
[node.js fs] readdir with filetypes failed with error:  [Error: ENOENT: no such file or directory, scandir '/home/coder/project/upload/210051214'] {
  errno: -2,
  code: 'ENOENT',
  syscall: 'scandir',
  path: '/home/coder/project/upload/210051214'
}
[node.js fs] readdir with filetypes failed with error:  [Error: ENOENT: no such file or directory, scandir '/home/coder/project/upload/210051214'] {
  errno: -2,
  code: 'ENOENT',
  syscall: 'scandir',
  path: '/home/coder/project/upload/210051214'
}
)";

    std::stringstream ss;
    ss << log;

    std::string prefix = R"(^\[\d{4}-\d{2}-\d{2}T\d{2}:\d{2}:\d{2}\.\d{3}Z\])";
    std::string level = R"((info|error))";
    std::string pattern = prefix + R"(\s+)" + level;
    std::regex r(pattern, std::regex_constants::ECMAScript);
    std::smatch sm;

    while(!ss.eof())
    {
        std::string line;
        std::getline(ss, line);
        if(std::regex_search(line, sm, r))
        {
            std::string msg = sm.suffix();
            //std::string keyword;
            //std::regex r_key(pattern);
            std::cout << msg << '\n';
        }
    }

    return 0;
}