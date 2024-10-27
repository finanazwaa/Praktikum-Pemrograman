#include <iostream>
using namespace std;

    float addition (float num1, float num2) {
       float result = (num1 + num2);
       return result;
   }
   
    float difference (float num1, float num2) {
       float result = (num1 - num2);
       return result;
   }

int main() {

   float num1 = 9, num2 = 5;
   float add, diff;

   cout << "====================" << endl;
   cout << "Mathematic Operation" << endl;
   cout << "====================" << endl;
   
   add = addition(num1, num2);
   diff = difference(num1, num2);
   
   cout << "Number 1: " << num1 << endl;
   cout << "Number 2: " << num2 << endl;
   
   cout << "The addition of the numbers: " << add << endl;
   cout << "The difference of the numbers: " << diff << endl;
   
float expectedAdd = 14, expectedDiff = 4;

bool testPassed = true; 
        if (add != expectedAdd && diff != expectedDiff ) {
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