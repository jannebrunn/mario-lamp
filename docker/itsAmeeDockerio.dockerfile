FROM ubuntu:20.04
RUN apt-get update
RUN apt-get install wget -y
ENV ARDUINO_CLI arduino-cli_0.27.1_Linux_ARM64
RUN wget https://github.com/arduino/arduino-cli/releases/download/0.27.1/${ARDUINO_CLI}.tar.gz
RUN tar xvf ${ARDUINO_CLI}.tar.gz
RUN mv arduino-cli /usr/local/bin
