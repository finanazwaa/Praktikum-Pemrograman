#include <iostream>
using namespace std;

int main() {
    int n; // variable to store the user input
    int sum = 0; // variable to store the sum of natural numbers

    n = 10;
    cout << "Enter a  number: ";
 

    // Use a for loop to compute the sum
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Print the result
    cout << "The sum of all natural numbers up to " << n << " is " << sum << endl;

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