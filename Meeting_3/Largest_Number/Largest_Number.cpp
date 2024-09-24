#include <iostream>
using namespace std;

int main () {
cout << "Checking Largest Number" << endl;
cout << "==========================" << endl;
int a, b, c;
cout << "Enter the first number: ";
cin >> a;
cout << "Enter the second number: ";

cin >> b;
cout << "Enter the third number: ";
cin >> c;
if (a >= b && a >= c) {
cout << "The largest number is: " << a << endl;
}
else if (b >= a && b >= c) {
cout << "The largest number is: " << b << endl;
}
else {
cout << "The largest number is: " << c << endl;
}
return 0;
}