#include <iostream>
using namespace std;

  float factorial (float m) {
       if (m>1) {
           return m*factorial(m-1);
       }
       else {
           return 1;
       }
   }

   
int main() {
    float m = 5;
    float fact;
    cout << "============" << endl;
    cout << "Factorial" << endl;
    cout << "============" << endl;

    cout << "Number: " << m << endl;
    
    fact = factorial (m);
   
    cout << "The factorial of " << m << " is " << fact << endl;

    float expectedFact = 120;
    bool testPassed = true; 
        if (fact != expectedFact) {
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