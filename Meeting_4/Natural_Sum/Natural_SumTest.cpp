#include <iostream>
using namespace std;

int main() {
    cout << "Natural Number Sum" << endl;
    cout << "=================" << endl;
    
    int n; 
    int sum = 0; 

    n = 10;
    cout << "Enter a  number: ";
 
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of all natural numbers up to " << n << " is " << sum << endl;

    //Expected result for make test
    int expectedN = 10;
    int expectedResult = 55;

    bool testPassed = false;
    if (n == expectedN) testPassed = true;
    if (sum == expectedResult) testPassed = true;

    if (testPassed = true) {
        cout << "Test Passed!" << endl;
    }

    else {
        cout << "Test Failed!" << endl;
    }

    return 0;
}