# `docker_build`
* 先行將 `g++`, `gdb` 以及vscode的套件安裝好，並將image標記為`codercom/code-server_cpp`

# `make_config`
* 依照`docker-compose.yml.template`的內容使用`make_yaml.py`自動生成對應數量的容器
* 如要使用原始影像則`IMG_NAME="codercom/code-server"`，若是要使用預載好套件的則選`"codercom/code-server"`

# `docker_run`
* 使用`docker-compose`啟動所有容器

# `docker_clean`
* 關閉所有容器

# `get_password`
* 讀出所有容器預設的密碼
