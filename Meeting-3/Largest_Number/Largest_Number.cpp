#include <iostream>
#include <fstream>  // Include for file handling
using namespace std;

int main() {
    // Declare file stream object to write to a file
    ofstream file("largest_number_output.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Checking Largest Number" << endl;
    cout << "==========================" << endl;
    file << "Checking Largest Number" << endl;
    file << "==========================" << endl;

    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    file << "First number: " << a << endl;

    cout << "Enter the second number: ";
    cin >> b;
    file << "Second number: " << b << endl;

    cout << "Enter the third number: ";
    cin >> c;
    file << "Third number: " << c << endl;

    // Find the largest number and write the result to both console and file
    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
        file << "The largest number is: " << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
        file << "The largest number is: " << b << endl;
    }
    else {
        cout << "The largest number is: " << c << endl;
        file << "The largest number is: " << c << endl;
    }

    // Close the file
    file.close();

    cout << "Result saved to largest_number_output.txt." << endl;

    return 0;
}
