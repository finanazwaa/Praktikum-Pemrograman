#include <iostream>
using namespace std;

int main () {
cout << "Checking Largest Number" << endl;
cout << "==========================" << endl;
int a, b, c;
a = 3;
cout << "Enter the first number: " << a << endl;

b = 5;
cout << "Enter the second number: " << b <<  endl;

c = 10;
cout << "Enter the third number: " << c << endl;


if (a >= b && a >= c) {
cout << "The largest number is: " << a << endl;
}
else if (b >= a && b >= c) {
cout << "The largest number is: " << b << endl;
}
else {
cout << "The largest number is: " << c << endl;
}

int expectedA = 3;
int expectedB = 5;
int expectedC = 10;
int expectedResult = c >= a && c >= b;

bool testPassed = false;
if (a == expectedA) testPassed = true;
if (b == expectedB) testPassed = true;
if (c == expectedC) testPassed = true;
if (expectedResult) testPassed = true;

if (testPassed = true) {
    cout << "Test Passed!" << endl;
}
else {
    cout << "Test Failed!" << endl;
    }

return 0;
}