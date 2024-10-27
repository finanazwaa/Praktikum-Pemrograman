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
    cout << "============" << endl;
    cout << "Numbers" << endl;
    cout << "============" << endl;
    
   float num1, num2;
   float add, diff;
   
   cout << "1st Number: ";
   cin >> num1;
   cout << endl;
   
   cout << "2nd Number: ";
   cin >> num2;
   cout << endl;
   
   cout << "====================" << endl;
   cout << "Mathematic Operation" << endl;
   cout << "====================" << endl;
   
   add = addition(num1, num2);
   diff = difference(num1, num2);
   
   cout << "Number 1: " << num1 << endl;
   cout << "Number 2: " << num2 << endl;
   
   cout << "The addition of the numbers: " << add << endl;
   cout << "The difference of the numbers: " << diff << endl;
   
    return 0;
}