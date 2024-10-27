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
    float m;
    float fact;
    cout << "============" << endl;
    cout << "Factorial" << endl;
    cout << "============" << endl;

    cout << "Enter a number: ";
    cin >> m;
    cout << endl;
    
    fact = factorial (m);
   
   cout << "The factorial of " << m << " is " << fact << endl;

   
    return 0;
}