#!/bin/bash

arduinoCliDockerImage="ardiono-cli-install:0.0.2"
BUILD_DIR="/home/asvens85/mario-lamp/src"

CURRENTEPOCTIME=`date +"%m%d%Y-%H%M%S"`

BUILD_PATH="${BUILD_DIR}/mario-lamp-arduino/"
OUTPUT_DIR=${BUILD_DIR}/out/${CURRENTEPOCTIME}
compileString="arduino-cli compile -b arduino:avr:uno ${BUILD_PATH} --output-dir ${OUTPUT_DIR}"

docker run --privileged -v ${BUILD_DIR}:${BUILD_DIR} --network host ${arduinoCliDockerImage} mkdir ${OUTPUT_DIR} && chmod 777 ${OUTPUT_DIR} && ${compileString} && chmod 777 ${OUTPUT_DIR}/mario-lamp-arduino.ino.* && ls -la ${OUTPUT_DIR}
