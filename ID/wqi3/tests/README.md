# Tests

This directory contains the code that runs the test runner that runs the tests in each lab. This code was written specifically for these intro labs. 
However, it requires a little work to setup given that it is in Node.js and the CMPUT 274 virtual image does not include Node.js by default.

## Setup

- `sudo apt-get install nodejs`

## Usage
- `node app.js "path to tests directory" "command to run (e.g. a path to an executable)"`
- The file structure of the tests directory must look like the below
```
# As a note, # MUST start from 0

tests/
    input/
        #.input.txt
    expected/
        #.output.txt
```