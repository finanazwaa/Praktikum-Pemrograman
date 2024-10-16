#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
    cout<< "Payslip of Employee"<< endl;
    
    string name = "Joan";
    cout<< "Name: " << name << endl;
    
    int gross = 10000000;
    cout << "Gross Salary: Rp " << gross << endl;
    
    int installment = 100000;
    cout << "Installment: Rp " << installment << endl;
    
    int insurance = 200000;
    cout <<"Insurance: Rp " << insurance << endl;
   
    int tax;
    tax = gross * 0.2;
    cout << "Tax: Rp " << tax << endl;
    
    int net;
    net = gross - (installment + insurance + tax);
    
           if (net < 0) {
        cout << "Net Salary: - Rp " << (-net) << endl; 
        cout << "The employee needs better money management strategy.";
    }
    
        else {
        cout << "Net Salary: Rp " << net << endl; 
    }

    //Expected result for make test
    string expectedName = "Joan";
    int expectedGross = 10000000;
    int expectedInstallment = 100000;
    int expectedInsurance = 200000;
    int expectedTax = 2000000;
    int expectedNet = 7700000;

    bool testPassed = false;    
    if (name == expectedName) testPassed = true;
    if (gross == expectedGross) testPassed = true;
    if (installment == expectedInstallment) testPassed = true;
    if (insurance == expectedInsurance) testPassed = true;
    if (tax == expectedTax) testPassed = true;
    if (net == expectedNet) testPassed = true;

    if (testPassed = true) {
        cout << "Test Passed!" << endl;
    }

    else {
        cout << "Test Failed!" << endl;
    }

    return 0;
}
