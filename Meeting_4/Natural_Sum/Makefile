# Target to compile the object file
Natural_Sum: Natural_Sum.o
	g++ Natural_Sum.o -o Natural_Sum.exe

# Target to compile the C++ program
Natural_Sum.o: Natural_Sum.cpp
	g++ -c Natural_Sum.cpp -o Natural_Sum.o

# Target to run the program (interactively)
run: Natural_Sum
	./Natural_Sum.exe

# Target to compile the object Test file
Natural_SumTest: Natural_SumTest.o
	g++ Natural_SumTest.o -o Natural_SumTest.exe

# Target to compile the C++ Test program
Natural_SumTest.o: Natural_SumTest.cpp
	g++ -c Natural_SumTest.cpp -o Natural_SumTest.o

# Target to run the Test program
test: Natural_SumTest
	./Natural_SumTest.exe

# Target to clean up compiled files
clean:
	rm -f Natural_Sum.o Natural_SumTest.o Natural_Sum.exe Natural_SumTest.exe