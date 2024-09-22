#Target to compile the C++ program
Payslip: Payslip.o
	g++ Payslip.o -o Payslip

#Target to compile the object file
Payslip.o: Payslip.cpp
	g++ -c Payslip.cpp -o Payslip.o

#Target to run the program
run: Payslip
	./Payslip

#Target to clean up compiled files
clean:
	rm -f Payslip.o Payslip 
