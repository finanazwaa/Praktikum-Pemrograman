#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Reverse Array" << endl;
    cout << "=================" << endl;

    vector <int> vectorA;
    int counts = 5;
    
    cout << "How many numbers you want to input: " << counts << endl;
   
    cout << "Enter " << counts << " numbers: ";
    for (int i = 1; i <= 5; i++) {
      vectorA.push_back(i);
      cout << i << " ";
    }
    
    cout << endl;

    for (int i = 0; i < counts/2; i++) {
        swap (vectorA[i], vectorA[counts - 1 - i]);
    }

    cout << "The reversed vector: ";
    for (int i = 0; i < vectorA.size(); i++) {
        cout << vectorA[i] << " ";
    }

    cout << endl;

    vector<int> expectedReversed = {5, 4, 3, 2, 1};

    bool testPassed = true;
    for (int i = 0; i < counts; i++) {
        if (vectorA[i] != expectedReversed[i]) {
            testPassed = false;
        }
    }

    // Check if all results are correct
    if (testPassed) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}
