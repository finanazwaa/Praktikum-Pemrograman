#include <iostream>
using namespace std;

int main() {
    int N = 3;

    struct data {
        int niu;
        float uts_value;
        float uas_value;
        float average;
    };

    struct expectedData {
        int niu;
        float uts_value;
        float uas_value;
        float average;
    };

    data theData[50]; 
    expectedData theExpectedData[50];

    cout << "=====================" << endl;
    cout << "Student Data Score" << endl;
    cout << "=====================" << endl;
    cout << endl;

    cout << "How many data you will input? " << N << endl;

    theData[0].niu = 532953;
    theData[0].uts_value = 90;
    theData[0].uas_value = 100;

    theData[1].niu = 532850;
    theData[1].uts_value = 89;
    theData[1].uas_value = 95;

    theData[2].niu = 546690;
    theData[2].uts_value = 88;
    theData[2].uas_value = 99;

    
    for (int i = 0; i < N; i++) {
        theData[i].average = (theData[i].uts_value + theData[i].uas_value) / 2;
    }

    theExpectedData[0].niu = 532953;
    theExpectedData[0].uts_value = 90;
    theExpectedData[0].uas_value = 100;
    theExpectedData[0].average = 95;

    theExpectedData[1].niu = 532850;
    theExpectedData[1].uts_value = 89;
    theExpectedData[1].uas_value = 95;
    theExpectedData[1].average = 92;

    theExpectedData[2].niu = 546690;
    theExpectedData[2].uts_value = 88;
    theExpectedData[2].uas_value = 99;
    theExpectedData[2].average = 93.5;

    cout << "=================" << endl;
    cout << "STUDENTS DATA:" << endl;
    cout << "=================" << endl;
    cout << endl;

    // Displaying the actual data
    for (int i = 0; i < N; i++) {
        cout << "NIU: " << theData[i].niu << endl;
        cout << "UTS Score: " << theData[i].uts_value << endl;
        cout << "UAS Score: " << theData[i].uas_value << endl;
        cout << "Average Score: " << theData[i].average << endl;
        cout << endl;
    }

    
    bool testPassed = true; 
    for (int i = 0; i < N; i++) {
        if (theData[i].niu != theExpectedData[i].niu &&
            theData[i].uts_value != theExpectedData[i].uts_value &&
            theData[i].uas_value != theExpectedData[i].uas_value &&
            theData[i].average != theExpectedData[i].average) {
            testPassed = false;
        }
    }

    // Output test result
    if (testPassed) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}
