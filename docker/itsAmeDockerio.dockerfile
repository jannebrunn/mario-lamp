FROM ubuntu:22.04
RUN apt-get update
RUN apt-get install wget 
ENV ARDUINO_CLI arduino-cli_0.27.1_Linux_ARM64
RUN wget https://github.com/arduino/arduino-cli/releases/download/0.27.1/${ARDUINO_CLI}.tar.gz
RUN tar xvjf ${ARDUINO_CLI}.tar.bz2
RUN mv ${ARDUINO_CLI}/bin/phantomjs /usr/local/bin
