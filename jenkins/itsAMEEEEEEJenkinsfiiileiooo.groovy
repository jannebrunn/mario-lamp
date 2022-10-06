node {
    stage('#######Checkout Mario Lamp Repo######') {
            println 'Checking out code from Github'
            git branch: 'bowser', url: 'https://github.com/jannebrunn/mario-lamp'
            println''
            BUILD_DIR="${env.WORKSPACE}/src" 
            BUILD_PATH="${BUILD_DIR}/mario-lamp-arduino/"
            OUTPUT_DIR="${BUILD_DIR}/out/${env.BUILD_NUMBER}"
            inoFile="${BUILD_DIR}/mario-lamp-arduino/mario-lamp-arduino.ino"
            sh("cat ${inoFile}")
            println''
        }
    
    stage('Compile Mario Lamp Source code') {
            println 'Compiling code'
            
            
            sh("arduino-cli core install arduino:avr")
            compileString="arduino-cli compile -b arduino:avr:uno ${BUILD_PATH} --output-dir ${OUTPUT_DIR}"
            sh("mkdir ${OUTPUT_DIR} && chmod 777 ${OUTPUT_DIR} && ${compileString} && chmod 777 ${OUTPUT_DIR}/mario-lamp-arduino.ino.* && ls -la ${OUTPUT_DIR}")
            
        }
        stage('Upload to DUT') {
            println 'Uploading to board...'
            uploadString="arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno ${BUILD_PATH}"

            sh("${uploadString}")
            
            
        }
    
    stage('Running system tests') {
            println 'Running system tests'
        }
}