#include <iostream>
using namespace std;

  int gcd (int a, int b) {
       if (b == 0) {
           return a;
       }
       else {
           return gcd (b, a%b);
       }
   }

   
int main() {
    int a = 280, b = 32;
    cout << "================" << endl;
    cout << "GCD Calculator" << endl;
    cout << "================" << endl;

    int result = gcd(a,b);

    cout << "The GCD of " << a << " and " << b << " is " << result << endl;

    int expectedResult = 8;    
    bool testPassed = true; 
        if (result != expectedResult) {
            testPassed = false;
    }

    // Output test result
    if (testPassed) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

   
    return 0;
}