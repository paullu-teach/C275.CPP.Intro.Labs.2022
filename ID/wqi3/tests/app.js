const fs = require('fs');
const path = require('path');

const { Test } = require('./src/test');

const [_, __, ...args] = process.argv;

const INPUT_DIRETORY = path.join(args[0], 'input');
const OUTPUT_DIRECTORY = path.join(args[0], 'expected');

const EXE_PATH = args[1];

function getTests() {
    const inputFiles = fs.readdirSync(INPUT_DIRETORY)
        .map(fileName => path.join(INPUT_DIRETORY, fileName));

    const outputFiles = fs.readdirSync(OUTPUT_DIRECTORY)
        .map(fileName => path.join(OUTPUT_DIRECTORY, fileName));


    const tests = [];
    for (let i = 0; i < inputFiles.length; i++) {
        const inputPath = inputFiles[i];
        const outputPath = outputFiles[i];

        const test = new Test(inputPath, outputPath);
        tests.push(test);
    }

    return tests;
}

(async () => {
    const tests = getTests();
    let currentTest = 1;

    console.log('====================');
    console.log(`RUNNING ${tests.length} TESTS`);
    for (const test of tests) {
        const testResult = await test.run(EXE_PATH);
        if (testResult) {
            console.log(`PASSED TEST ${currentTest}`);
        } else {
            console.error(`FAILED TEST ${currentTest}`);
            console.error('No more tests will be run until this is resolved.');
            break;
        }
        
        currentTest++;
    }
    console.log('====================');
})();