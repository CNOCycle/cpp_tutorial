# Linux Basic Commands

## `pwd`
* print name of current/working directory
```
coder@924ed809ef27:~$ pwd
/home/coder
coder@924ed809ef27:~$ cd spdlog-1.9.2/
coder@924ed809ef27:~$ pwd
/home/coder/spdlog-1.9.2/
```

## `cd`
* Changing directory
```
coder@924ed809ef27:~$ pwd
/home/coder
coder@924ed809ef27:~$ cd spdlog-1.9.2/
coder@924ed809ef27:~$ pwd
/home/coder
coder@924ed809ef27:~/spdlog-1.9.2$ cd ..
coder@924ed809ef27:~$ pwd
/home/coder
```

## `ls`
* list directory contents
```
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  spdlog-1.9.2  test  test.cpp  v1.9.2.tar.gz
coder@924ed809ef27:~$ ls -a
.  ..  a.out  .bash_history  .bash_logout  .bashrc  basic_commands.md  .cache  .config  .local  .profile  spdlog-1.9.2  test  test.cpp  v1.9.2.tar.gz  .vscode  .wget-hsts
coder@924ed809ef27:~$ ls -l
total 1924
-rwxr-xr-x  1 coder coder 1585064 Oct  9 06:28 a.out
-rw-r--r--  1 coder coder      22 Oct  9 06:34 basic_commands.md
drwxr-xr-x 12 coder coder    4096 Oct  8 11:41 spdlog-1.9.2
-rwxr-xr-x  1 coder coder   38208 Oct  9 06:05 test
-rw-r--r--  1 coder coder     810 Oct  9 06:27 test.cpp
-rw-r--r--  1 coder coder  327799 Oct  8 11:40 v1.9.2.tar.gz
```

## `cat`
* concatenate files and print on the standard output
```
coder@924ed809ef27:~$ cat .vscode/launch.json 
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "g++ - Build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++ build active file",
            "miDebuggerPath": "/usr/bin/gdb"
        }
    ]
}
```

## `cp`
* copy files and directories
```
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  spdlog-1.9.2  test  test.cpp  v1.9.2.tar.gz
coder@924ed809ef27:~$ cp test.cpp new.cpp
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  new.cpp  spdlog-1.9.2  test  test.cpp  v1.9.2.tar.gz
```

## `mv`
* move (rename) files
```
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  new.cpp  spdlog-1.9.2  test  test.cpp  v1.9.2.tar.gz
coder@924ed809ef27:~$ mv test b.out
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  b.out  new.cpp  spdlog-1.9.2  test.cpp  v1.9.2.tar.gz
```

## `mkdir`
* make directorie
```
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  b.out  new.cpp  spdlog-1.9.2  test.cpp  v1.9.2.tar.gz
coder@924ed809ef27:~$ mkdir new_folder
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  b.out  new.cpp  new_folder  spdlog-1.9.2  test.cpp  v1.9.2.tar.gz
```

## `rmdir`
* remove empty directories
```
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  b.out  new.cpp  new_folder  spdlog-1.9.2  test.cpp  v1.9.2.tar.gz
coder@924ed809ef27:~$ rmdir new_folder/
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  b.out  new.cpp  spdlog-1.9.2  test.cpp  v1.9.2.tar.gz
coder@924ed809ef27:~$ rm spdlog-1.9.2/
rm: cannot remove 'spdlog-1.9.2/': Is a directory
```

## `rm`
* remove files or directories
```
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  b.out  new.cpp  spdlog-1.9.2  test.cpp  v1.9.2.tar.gz
coder@924ed809ef27:~$ rm b.out 
coder@924ed809ef27:~$ ls
a.out  basic_commands.md  new.cpp  spdlog-1.9.2  test.cpp  v1.9.2.tar.gz
```