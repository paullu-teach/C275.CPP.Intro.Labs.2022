"""
Utility tool to run tests in the following file tree format.

tests/
    - expected/
        - #.output.txt (# is REQUIRED to start from 0)
    - input/
        - #.input.txt  (# is REQUIRED to start from 0)

Usage: python3 run_tests.py "path_to_tests_directory" "command to run for each test"

Created by: William Qi for the CS275 Intro Labs.
"""
import sys
import os
from test import Test

"""
Retrieve all Test classes representative of their respective input/output file.

Arguments:
path_to_tests_directory - string - path to the tests directory that contains the input and expected folder
"""
def get_tests(path_to_tests_directory):
    input_directory = path_to_tests_directory + "/input"
    output_directory = path_to_tests_directory + "/expected"

    input_files = os.listdir(input_directory)

    tests = []
    for i in range(len(input_files)):
        input_file_path = input_directory + "/" + str(i) + ".input.txt"
        output_file_path = output_directory + "/" + str(i) + ".output.txt"
        tests.append(Test(input_file_path, output_file_path))

    return tests

"""
Parses command line arguments and runs all tests using those arguments.
"""
def run_tests():
    args = sys.argv
    if len(args) != 3:
        print("Invalid Usage: python3 run_tests.py \"path_to_tests_directory\" \"command to run for each test\"")
        return

    path_to_tests_directory = args[1]
    command_to_run = args[2]

    tests = get_tests(path_to_tests_directory)
    print("There are %d tests that need to be passed." % (len(tests)))

    current_test = 0
    for test in tests:
        success = test.run(command_to_run)
        if success:
            print("PASSED TEST %d" % (current_test))
        else:
            print("FAILED TEST %d" % (current_test))
            sys.exit(1)

    print("ALL TESTS PASSED")


if __name__ == "__main__":
    run_tests()