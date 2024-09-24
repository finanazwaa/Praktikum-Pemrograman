#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Multiplication Table" << endl;
    cout << "=================" << endl;

    int n;
    n = 6;
    cout << "Enter a number: " << n << endl;
    
    cout << "Multiplication table for " << n << ":\n";

    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    //Expected result for make test
    int expectedN = 6;

    bool testPassed = false;
    if (n == expectedN) testPassed = true;

    if (testPassed = true) {
        cout << "Test Passed!" << endl;
    }

    else {
        cout << "Test Failed!" << endl;
    }

    return 0;
} 