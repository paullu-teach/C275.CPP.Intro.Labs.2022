# FILE_NAME represents the solution file name found in ./soln (without the .cpp header)
FILE_NAME=digit

run: build
	./build/$(FILE_NAME)
	$(MAKE) clean

tests: build
	chmod u+x ../../tests/run_tests.py
	python3 ../../tests/run_tests.py "./tests" "./build/$(FILE_NAME)"
	$(MAKE) clean

build:
	mkdir -p build
	g++ ./soln/$(FILE_NAME).cpp -o ./build/$(FILE_NAME) -Wall -std=c++11 -g
	
clean:
	rm -r ./build