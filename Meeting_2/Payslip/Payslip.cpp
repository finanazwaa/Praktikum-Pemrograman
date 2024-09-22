#include <iostream>
#include <fstream>  // Include for file handling
#include <cmath>    // Use cmath for math operations
using namespace std;

int main() {
    // Declare file stream object to write to a file
    ofstream file("payslip_output.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Print information to console
    cout << "Payslip of Employee" << endl;
    file << "Payslip of Employee" << endl;

    string name;
    cout << "Name: ";
    cin >> name;
    file << "Name: " << name << endl;

    int gross;
    cout << "Gross Salary: Rp ";
    cin >> gross;
    file << "Gross Salary: Rp " << gross << endl;

    int installment;
    cout << "Installment: Rp ";
    cin >> installment;
    file << "Installment: Rp " << installment << endl;

    int insurance;
    cout << "Insurance: Rp ";
    cin >> insurance;
    file << "Insurance: Rp " << insurance << endl;

    // Calculate tax
    int tax = gross * 0.2;
    cout << "Tax: Rp " << tax << endl;
    file << "Tax: Rp " << tax << endl;

    // Calculate net salary
    int net = gross - (installment + insurance + tax);
    
    if (net < 0) {
        cout << "Net Salary: - Rp " << (-net) << endl;
        file << "Net Salary: - Rp " << (-net) << endl;
        cout << "The employee needs better money management strategy." << endl;
        file << "The employee needs better money management strategy." << endl;
    } else {
        cout << "Net Salary: Rp " << net << endl;
        file << "Net Salary: Rp " << net << endl;
    }

    // Close the file
    file.close();

    cout << "Payslip saved to payslip_output.txt." << endl;

    return 0;
}
