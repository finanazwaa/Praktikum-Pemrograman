# Target to compile the object file
Problem_1: Problem_1.o
	g++ Problem_1.o -o Problem_1.exe

# Target to compile the C++ program
Problem_1.o: Problem_1.cpp
	g++ -c Problem_1.cpp -o Problem_1.o

# Target to run the program (interactively)
run: Problem_1
	./Problem_1.exe

# Target to compile the object Test file
Problem_1_Test: Problem_1_Test.o
	g++ Problem_1_Test.o -o Problem_1_Test.exe

# Target to compile the C++ Test program
Problem_1_Test.o: Problem_1_Test.cpp
	g++ -c Problem_1_Test.cpp -o Problem_1_Test.o

# Target to run the Test program
test: Problem_1_Test
	./Problem_1_Test.exe

# Target to clean up compiled files
clean:
	rm -f Problem_1.o Problem_1_Test.o Problem_1.exe Problem_1_Test.exe
