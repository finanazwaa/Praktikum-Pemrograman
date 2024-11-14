# Target to compile the object file
selection: selection.o
	g++ selection.o -o selection.exe

# Target to compile the C++ program
selection.o: selection.cpp
	g++ -c selection.cpp -o selection.o

# Target to run the program (interactively)
run: selection
	./selection.exe

# Target to compile the object Test file
selectionTest: selectionTest.o
	g++ selectionTest.o -o selectionTest.exe

# Target to compile the C++ Test program
selectionTest.o: selectionTest.cpp
	g++ -c selectionTest.cpp -o selectionTest.o

# Target to run the Test program
test: selectionTest
	./selectionTest.exe

# Target to clean up compiled files
clean:
	rm -f selection.o selectionTest.o selection.exe selectionTest.exe
