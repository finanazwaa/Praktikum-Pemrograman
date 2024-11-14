# Target to compile the object file
sequential: sequential.o
	g++ sequential.o -o sequential.exe

# Target to compile the C++ program
sequential.o: sequential.cpp
	g++ -c sequential.cpp -o sequential.o

# Target to run the program (interactively)
run: sequential
	./sequential.exe

# Target to compile the object Test file
sequentialTest: sequentialTest.o
	g++ sequentialTest.o -o sequentialTest.exe

# Target to compile the C++ Test program
sequentialTest.o: sequentialTest.cpp
	g++ -c sequentialTest.cpp -o sequentialTest.o

# Target to run the Test program
test: sequentialTest
	./sequentialTest.exe

# Target to clean up compiled files
clean:
	rm -f sequential.o sequentialTest.o sequential.exe sequentialTest.exe
