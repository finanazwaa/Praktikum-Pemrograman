#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Reverse Array" << endl;
    cout << "=================" << endl;
    
    vector <int> vectorA;
    int counts;
    int numbers;

    cout << "How many numbers you want to input: ";
    cin >> counts;

    cout << "Enter " << counts << " numbers: " << endl;
    for (int i = 0; i < counts; i++) {
        cin >> numbers; 
        vectorA.push_back(numbers);
    }

    for (int i = 0; i < counts/2; i++) {
        swap (vectorA[i], vectorA[counts - 1 - i]);
    }

    cout << "The reversed vector: ";
    for (int i = 0; i < vectorA.size(); i++) {
        cout << vectorA[i] << " ";
    }

    cout << endl;
    return 0;
}