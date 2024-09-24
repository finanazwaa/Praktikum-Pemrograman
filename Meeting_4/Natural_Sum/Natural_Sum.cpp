#include <iostream>
using namespace std;

int main() {
    cout << "Natural Number Sum" << endl;
    cout << "=================" << endl;
    
    int n; 
    int sum = 0; 

    cout << "Enter a  number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of all natural numbers up to " << n << " is " << sum << endl;

    return 0;
}