const fs = require('fs');
const childProcess = require('child_process');

class Test {

    constructor(inputPath, outputPath) {
        this.input = fs.readFileSync(inputPath, 'utf8');
        this.output = fs.readFileSync(outputPath, 'utf8');
    }

    run(exePath) {
        return new Promise(resolve => {
            const process = childProcess.spawn(exePath);

            let programOutput = '';

            process.stdout.on('data', data => {
                programOutput += data;
            });

            process.on('close', () => {
                // All of the programs use endl to flush the output. but this causes issues when looking at the test cases.
                // this fixes it by getting rid of the last character.
                const actualOutput = programOutput.slice(0, -1);
                resolve(actualOutput == this.output);
            });

            // write the test input for the program to process
            process.stdin.write(this.input + '\n');
            process.stdin.end();
        });
    }

}

module.exports = {
    Test
};