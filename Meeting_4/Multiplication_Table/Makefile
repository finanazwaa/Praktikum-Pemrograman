Table: Table.o
	g++ Table.o -o Table

Table.o: Table.cpp
	g++ -c Table.cpp -o Table.o

run: Table
	./Table

clean:
	rm -f Table.o Table
