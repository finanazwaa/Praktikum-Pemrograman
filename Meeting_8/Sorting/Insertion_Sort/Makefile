# Target to compile the object file
insertion: insertion.o
	g++ insertion.o -o insertion.exe

# Target to compile the C++ program
insertion.o: insertion.cpp
	g++ -c insertion.cpp -o insertion.o

# Target to run the program (interactively)
run: insertion
	./insertion.exe

# Target to compile the object Test file
insertionTest: insertionTest.o
	g++ insertionTest.o -o insertionTest.exe

# Target to compile the C++ Test program
insertionTest.o: insertionTest.cpp
	g++ -c insertionTest.cpp -o insertionTest.o

# Target to run the Test program
test: insertionTest
	./insertionTest.exe

# Target to clean up compiled files
clean:
	rm -f insertion.o insertionTest.o insertion.exe insertionTest.exe
