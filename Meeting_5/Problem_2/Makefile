# Target to compile the object file
Problem_2: Problem_2.o
	g++ Problem_2.o -o Problem_2.exe

# Target to compile the C++ program
Problem_2.o: Problem_2.cpp
	g++ -c Problem_2.cpp -o Problem_2.o

# Target to run the program (interactively)
run: Problem_2
	./Problem_2.exe

# Target to compile the object Test file
Problem_2_Test: Problem_2_Test.o
	g++ Problem_2_Test.o -o Problem_2_Test.exe

# Target to compile the C++ Test program
Problem_2_Test.o: Problem_2_Test.cpp
	g++ -c Problem_2_Test.cpp -o Problem_2_Test.o

# Target to run the Test program
test: Problem_2_Test
	./Problem_2_Test.exe

# Target to clean up compiled files
clean:
	rm -f Problem_2.o Problem_2_Test.o Problem_2.exe Problem_2_Test.exe
