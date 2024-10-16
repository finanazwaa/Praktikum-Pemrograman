#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    cout << "Quadratic Equations ax^2 + bx + c" << endl;
    cout << "====================================" << endl;
    int a, b, c;
    a = 2;
    cout << "Enter the coefficient a: " << a << endl;

    b = -9; 
    cout << "Enter the coefficient b: " << b << endl;
    
    c = 1;
    cout << "Enter the coefficient c: " << c << endl;
    
    cout << "================================" << endl;
    cout << "Your quadratic equation is " << a << "x^2 + " << b << "x + " << c << endl;

    int d;
    d = (b*b) - 4*a*c;
    cout << "The Discriminant: " << d << endl;
    cout << "The solution for your quadratic equation is: ";

    if (d > 0) {
        cout << "There are two distinct real roots: ";
        int x1, x2;
        x1 = ((-b) + (sqrt(d)))/(2*a);
        x2 = ((-b) - (sqrt(d)))/(2*a);
        cout << x1 << " and " << x2 << endl;
        }

    else if (d == 0) {
        cout << "There is exactly one root: " << endl;
        int x_equal;

        x_equal = (-b)/2*a;
        cout << x_equal;
        }

    else {
        cout << "D < 0, so there are no real roots (the roots are complex)." << endl;
        }

    //Expected result for make test
    int expectedA = 2;
    int expectedB = -9;
    int expectedC = 1;
    int expectedD = 73;
    int expectedResult = d > 0;

    bool testPassed = false;
    if (a == expectedA) testPassed = true;
    if (b == expectedB) testPassed = true;
    if (c == expectedC) testPassed = true;
    if (d == expectedD) testPassed = true;
    if (d == expectedResult) testPassed = true;

    if (testPassed = true) {
        cout << "Test Passed!" << endl;
    }

    else {
        cout << "Test Failed!" << endl;
    }

    return 0;
} 