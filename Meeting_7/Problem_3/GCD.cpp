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
    int a, b;
    cout << "================" << endl;
    cout << "GCD Calculator" << endl;
    cout << "================" << endl;

   cout << "Enter the first number: ";
   cin >> a;
   cout << endl;
   
   cout << "Enter the second number: ";
   cin >> b;
   cout << endl;
   
   int result = gcd(a,b);
   
   cout << "The GCD of " << a << " and " << b << " is " << result << endl;

   
    return 0;
}