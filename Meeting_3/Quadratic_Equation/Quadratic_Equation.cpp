#include <iostream>
#include <fstream>   // Include for file handling
#include <cmath>     // Use cmath for sqrt
using namespace std;

int main() {
    // Declare file stream object to write to a file
    ofstream file("quadratic_output.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

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
    cout << "Your quadratic equation is " << a << "x^2 + " << b << "x + " << c << endl;

    // Write the same information to the file
    file << "Quadratic Equations ax^2 + bx + c" << endl;
    file << "====================================" << endl;
    file << "Your quadratic equation is " << a << "x^2 + " << b << "x + " << c << endl;

    // Calculate discriminant
    int d = (b * b) - 4 * a * c;
    cout << "The Discriminant: " << d << endl;
    file << "The Discriminant: " << d << endl;

    // Solve and write results to both console and file
    if (d > 0) {
        int x1, x2;
        x1 = ((-b) + (sqrt(d))) / (2 * a);
        x2 = ((-b) - (sqrt(d))) / (2 * a);
        cout << "There are two distinct real roots: " << x1 << " and " << x2 << endl;
        file << "There are two distinct real roots: " << x1 << " and " << x2 << endl;
    } else if (d == 0) {
        int x_equal = (-b) / (2 * a);
        cout << "There is exactly one root: " << x_equal << endl;
        file << "There is exactly one root: " << x_equal << endl;
    } else {
        cout << "D < 0, so there are no real roots (the roots are complex)." << endl;
        file << "D < 0, so there are no real roots (the roots are complex)." << endl;
    }

    // Close the file
    file.close();
    
    cout << "The results have been saved to quadratic_output.txt." << endl;

    return 0;
}
