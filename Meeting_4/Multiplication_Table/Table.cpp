#include <iostream>
using namespace std;

int main() {
    int n; // variable to store the user input

    // Prompt the user for an integer input n
    cout << "Enter a number: ";
    cin >> n;

    // Use a for loop to print the multiplication table
    cout << "Multiplication table for " << n << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
} 