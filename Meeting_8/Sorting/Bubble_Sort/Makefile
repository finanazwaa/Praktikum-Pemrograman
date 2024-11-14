# Target to compile the object file
bubble: bubble.o
	g++ bubble.o -o bubble.exe

# Target to compile the C++ program
bubble.o: bubble.cpp
	g++ -c bubble.cpp -o bubble.o

# Target to run the program (interactively)
run: bubble
	./bubble.exe

# Target to compile the object Test file
bubbleTest: bubbleTest.o
	g++ bubbleTest.o -o bubbleTest.exe

# Target to compile the C++ Test program
bubbleTest.o: bubbleTest.cpp
	g++ -c bubbleTest.cpp -o bubbleTest.o

# Target to run the Test program
test: bubbleTest
	./bubbleTest.exe

# Target to clean up compiled files
clean:
	rm -f bubble.o bubbleTest.o bubble.exe bubbleTest.exe
