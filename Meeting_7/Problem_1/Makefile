# Target to compile the object file
MathOperation: MathOperation.o
	g++ MathOperation.o -o MathOperation.exe

# Target to compile the C++ program
MathOperation.o: MathOperation.cpp
	g++ -c MathOperation.cpp -o MathOperation.o

# Target to run the program (interactively)
run: MathOperation
	./MathOperation.exe

# Target to compile the object Test file
MathOperationTest: MathOperationTest.o
	g++ MathOperationTest.o -o MathOperationTest.exe

# Target to compile the C++ Test program
MathOperationTest.o: MathOperationTest.cpp
	g++ -c MathOperationTest.cpp -o MathOperationTest.o

# Target to run the Test program
test: MathOperationTest
	./MathOperationTest.exe

# Target to clean up compiled files
clean:
	rm -f MathOperation.o MathOperationTest.o MathOperation.exe MathOperationTest.exe
