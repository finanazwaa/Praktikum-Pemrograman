#include <iostream>
#include <fstream> // For file handling
using namespace std;

int main() {
    // Declare file stream object to write to a file
    ofstream file("sum_output.txt");

    // Check if the file opened successfully
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Print to console and write to file
    cout << "Sum of Natural Numbers" << endl;
    file << "Sum of Natural Numbers" << endl;

    int n; // variable to store the user input
    int sum = 0; // variable to store the sum of natural numbers

    // Prompt the user for an integer input n
    cout << "Enter a number: ";
    cin >> n;
    file << "Input number: " << n << endl;

    // Use a for loop to compute the sum
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Print the result to console and write to file
    cout << "The sum of all natural numbers up to " << n << " is " << sum << endl;
    file << "The sum of all natural numbers up to " << n << " is " << sum << endl;

    // Close the file after writing
    file.close();

    cout << "Results saved to sum_output.txt" << endl;

    return 0;
}
