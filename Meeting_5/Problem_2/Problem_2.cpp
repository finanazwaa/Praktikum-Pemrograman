#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Reverse Array" << endl;
    cout << "=================" << endl;

    vector <int> vector;
    int counts;
    int numbers;

    cout << "How many numbers you want to input: ";
    cin >> counts;

    cout << "Enter " << counts << " numbers: " << endl;
    for (int i = 0; i < counts; i++) {
        cin >> numbers; vector.push_back(numbers);
    }

    for (int i = 0; i < counts/2; i++) {
        swap (vector[i], vector[counts - 1 - i]);
    }

    cout << "The reversed vector: ";
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " ";
    }

    cout << endl;
    return 0;
}