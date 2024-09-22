#include <iostream>
#include <fstream>  // For file handling

int main() {
    int n; // variable to store the user input

    // Declare file stream object to write to a file
    std::ofstream file("multiplication_table_output.txt");

    if (!file) {
        std::cout << "Error opening file!" << std::endl;
        return 1;
    }

    // Prompt the user for an integer input n
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    file << "Multiplication table for " << n << ":\n";  // Log input to file

    // Use a for loop to print the multiplication table
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
        file << n << " * " << i << " = " << n * i << std::endl;  // Write to file
    }

    // Close the file after writing
    file.close();
    
    std::cout << "Multiplication table saved to multiplication_table_output.txt" << std::endl;

    return 0;
}
