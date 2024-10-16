#include <iostream>
using namespace std;

int main() {
    int N;
struct data {
    int niu;
    float uts_value;
    float uas_value;
    float average;
};

data theData[50];

cout << "=====================" << endl;
cout << "Student Data Score" << endl;
cout << "=====================" << endl;
cout << endl;

cout << "How many data you will input? ";
cin >> N;
cout << endl;

for (int i = 0; i < N; i++) {
    cout << "NIU: ";
    cin >> theData[i].niu;
    cout << "UTS Score: ";
    cin >> theData[i].uts_value;
    cout << "UAS Score: ";
    cin >> theData[i].uas_value;
    theData[i].average = (theData[i].uts_value + theData[i].uas_value)/2;
    
    cout << endl;
}

cout << "=================" << endl;
cout << "STUDENTS DATA:" << endl;
cout << "=================" << endl;
cout << endl;

for (int i = 0; i < N; i++) {
    cout << "NIU: " << theData[i].niu << endl;
    cout << "UTS Score: " << theData[i].uts_value << endl;
    cout << "UAS Score: " << theData[i].uas_value << endl;
    cout << "Average Score: " << theData[i].average << endl;
     cout << endl;
}

    return 0;
}