#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; // variable to store the user input

    // Prompt the user for an integer input n
    n = 6;
    cout << "Enter a number: " << n << endl;
    

    // Use a for loop to print the multiplication table
    cout << "Multiplication table for " << n << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

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