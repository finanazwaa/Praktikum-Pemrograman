# Target to compile the object file
Payslip: Payslip.o
	g++ Payslip.o -o Payslip.exe

# Target to compile the C++ program
Payslip.o: Payslip.cpp
	g++ -c Payslip.cpp -o Payslip.o

# Target to run the program (interactively)
run: Payslip
	./Payslip.exe

# Target to compile the object Test file
PayslipTest: PayslipTest.o
	g++ PayslipTest.o -o PayslipTest.exe

# Target to compile the C++ Test program
PayslipTest.o: PayslipTest.cpp
	g++ -c PayslipTest.cpp -o PayslipTest.o

# Target to run the Test program
test: PayslipTest
	./PayslipTest.exe

# Target to clean up compiled files
clean:
	rm -f Payslip.o PayslipTest.o Payslip.exe PayslipTest.exe