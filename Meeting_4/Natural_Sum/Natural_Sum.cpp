#include <iostream>
using namespace std;

int main() {
    int n; // variable to store the user input
    int sum = 0; // variable to store the sum of natural numbers

    // Prompt the user for an integer input n
    cout << "Enter a  number: ";
    cin >> n;

    // Use a for loop to compute the sum
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Print the result
    cout << "The sum of all natural numbers up to " << n << " is " << sum << endl;

    return 0;
}