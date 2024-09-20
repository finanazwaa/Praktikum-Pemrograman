#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
cout << "Quadratic Equations ax^2 + bx + c" << endl;
cout << "====================================" << endl;
int a, b, c;
cout << "Enter the coefficient a: ";
cin >> a;
cout << "Enter the coefficient b: ";
cin >> b;
cout << "Enter the coefficient c: ";
cin >> c;
cout << "================================" << endl;
cout << "Your quadratic equation is " << a << "x^2 + " << b << "x + " << c
<< endl;
int d;
d = (b*b) - 4*a*c;
cout <<"The Discriminant: " << d << endl;
cout << "The solution for your quadratic equation is: ";
if (d > 0) {
cout << "There are two distinct real roots: ";
int x1, x2;
x1 = ((-b) + (sqrt(d)))/(2*a);
x2 = ((-b) - (sqrt(d)))/(2*a);
cout << x1 << " and " << x2;
}
else if (d == 0) {
cout << "There is exactly one root: ";
int x_equal;

x_equal = (-b)/2*a;
cout << x_equal;
}
else {
cout << "D < 0, so there are no real roots (the roots are complex).";
}
return 0;
