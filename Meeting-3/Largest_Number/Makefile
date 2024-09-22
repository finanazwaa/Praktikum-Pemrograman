#Target to compile the C++ program
Largest_Number: Largest_Number.o
	g++ Largest_Number.o -o Largest_Number



#Target to compile the object file
Largest_Number.o: Largest_Number.cpp
	g++ -c Largest_Number.cpp -o Largest_Number.o

#Target to run the program
run: Largest_Number
	./Largest_Number


#Target to clean up compiled files
clean:
	rm -f Largest_Number .o Largest_Number

