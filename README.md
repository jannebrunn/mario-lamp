# mario-lamp

# installation and execution of arduino-cli on jenkins host

cd docker && make create-arduino-cli-install-docker-image
export arduinoCliDockerImage=ardiono-cli-install:0.0.2
docker run --privileged  ${arduinoCliDockerImage} arduino-cli version

#android-cli
arduino-cli compile -b arduino:avr:uno some-folder/src/mario-lamp-arduino/ --output-dir work-dir
