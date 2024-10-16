#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cout<<"Payslip of Employee"<< endl;
    cout << "=================" << endl;
    
    string name;
    cout<< "Name:";
    cin >> name;
    
    int gross;
    cout <<"Gross Salary: Rp ";
    cin >> gross;
    
    int installment;
    cout <<"Installment: Rp ";
    cin >> installment;
    
    int insurance;
    cout <<"Insurance: Rp ";
    cin >> insurance;
    
    int tax;
    tax = gross * 0.2;
    cout << "Tax: Rp " << tax << endl;
    
    int net;
    net = gross - (installment + insurance + tax);
    
        if (net < 0) {
        cout << "Net Salary: - Rp " << (-net) << endl; 
        cout << "The employee needs better money management strategy.";
    }
    
        else {
        cout << "Net Salary: Rp " << net << endl; 
    }
    return 0;
}
