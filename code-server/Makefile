make_config:
	python src/make_yaml.py

get_password:
	grep -rn --include=config.yaml 'password:' ./srv/ | sort

docker_build:
	DOCKER_BUILDKIT=1 docker build -f src/Dockerfile --network host --progress plain --tag codercom/code-server_cpp  ./src/

docker_run:
	UID_GID=$(shell id -u):$(shell id -g) ../docker-compose up -d

docker_clean:
	../docker-compose down

.PHONY: make_config get_password docker_build docker_run docker_clean
