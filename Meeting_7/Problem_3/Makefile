# Target to compile the object file
GCD: GCD.o
	g++ GCD.o -o GCD.exe

# Target to compile the C++ program
GCD.o: GCD.cpp
	g++ -c GCD.cpp -o GCD.o

# Target to run the program (interactively)
run: GCD
	./GCD.exe

# Target to compile the object Test file
GCDTest: GCDTest.o
	g++ GCDTest.o -o GCDTest.exe

# Target to compile the C++ Test program
GCDTest.o: GCDTest.cpp
	g++ -c GCDTest.cpp -o GCDTest.o

# Target to run the Test program
test: GCDTest
	./GCDTest.exe

# Target to clean up compiled files
clean:
	rm -f GCD.o GCDTest.o GCD.exe GCDTest.exe
