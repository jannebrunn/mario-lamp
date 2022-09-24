# mario-lamp

# installation and execution of arduino-cli on jenkins host

cd docker && make create-arduino-cli-install-docker-image
export arduinoCliDockerImage=ardiono-cli-install:0.0.2
docker run --privileged  ${arduinoCliDockerImage} arduino-cli version
