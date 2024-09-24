# Target to compile the object file
Largest_Number: Largest_Number.o
	g++ Largest_Number.o -o Largest_Number.exe

# Target to compile the C++ program
Largest_Number.o: Largest_Number.cpp
	g++ -c Largest_Number.cpp -o Largest_Number.o

# Target to run the program (interactively)
run: Largest_Number
	./Largest_Number.exe

# Target to compile the object Test file
Largest_NumberTest: Largest_NumberTest.o
	g++ Largest_NumberTest.o -o Largest_NumberTest.exe

# Target to compile the C++ Test program
Largest_NumberTest.o: Largest_NumberTest.cpp
	g++ -c Largest_NumberTest.cpp -o Largest_NumberTest.o

# Target to run the Test program
test: Largest_NumberTest
	./Largest_NumberTest.exe

# Target to clean up compiled files
clean:
	rm -f Largest_Number.o Largest_NumberTest.o Largest_Number.exe Largest_NumberTest.exe