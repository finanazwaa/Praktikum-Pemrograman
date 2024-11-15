# Target to compile the object file
binary: binary.o
	g++ binary.o -o binary.exe

# Target to compile the C++ program
binary.o: binary.cpp
	g++ -c binary.cpp -o binary.o

# Target to run the program (interactively)
run: binary
	./binary.exe

# Target to compile the object Test file
binaryTest: binaryTest.o
	g++ binaryTest.o -o binaryTest.exe

# Target to compile the C++ Test program
binaryTest.o: binaryTest.cpp
	g++ -c binaryTest.cpp -o binaryTest.o

# Target to run the Test program
test: binaryTest
	./binaryTest.exe

# Target to clean up compiled files
clean:
	rm -f binary.o binaryTest.o binary.exe binaryTest.exe
