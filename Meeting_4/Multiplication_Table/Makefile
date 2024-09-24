# Target to compile the object file
Table: Table.o
	g++ Table.o -o Table.exe

# Target to compile the C++ program
Table.o: Table.cpp
	g++ -c Table.cpp -o Table.o

# Target to run the program (interactively)
run: Table
	./Table.exe

# Target to compile the object Test file
TableTest: TableTest.o
	g++ TableTest.o -o TableTest.exe

# Target to compile the C++ Test program
TableTest.o: TableTest.cpp
	g++ -c TableTest.cpp -o TableTest.o

# Target to run the Test program
test: TableTest
	./TableTest.exe

# Target to clean up compiled files
clean:
	rm -f Table.o TableTest.o Table.exe TableTest.exe