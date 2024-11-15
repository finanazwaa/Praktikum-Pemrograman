#include <iostream>
#include <string>
using namespace std;

struct Data {
    long long number;
    string name;
    int value;
};

struct DataTest {
    long long number;
    string name;
    int value;
};

void showData (Data data[], int total) { 
    for (int i = 0; i < total; i++) {
        cout << data[i].number << "\t" << data[i].name << "\t" << data[i].value << endl;
    }
}

int main() {
        Data data[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    int total = sizeof(data) / sizeof(data[0]);
    
    // Based on NISN
    Data dataTestNISN[] = {
    {9970293945, "Alivia Rahma Pramesti", 70},
    {9970272750, "Achmad Yaumil Fadjri R", 60},
    {9965653989, "Arief Budiman", 60},
    {9963959682, "Rio Alfandra", 55},
    {9960312699, "Handi Ramadhan", 90},
    {9952382180, "Ari Lutfianto", 65},
    {9950310962, "Ronaldo Valentino Uneputty", 80}
    };

    cout << "Data Before Sorting: " << endl;
    showData(data, total);
    cout << endl;
    
    cout << "============================" << endl;
    cout << "Insertion Sort Based on NISN" << endl;
    cout << "============================" << endl;
    
    for (int j = 1; j < total; j++) {
        int i = j-1;
        Data temp = data[j];
        while (i >= 0 && data[i].number < temp.number){
            data[i+1] = data[i];
            i--;
        }
        data[i+1] = temp;
    }
    
    cout << "Data After Sorting: " << endl;
    showData(data, total);
    
    bool testPassed = true;
    for (int i = 0; i < total; i++) {
        if (data[i].number != dataTestNISN[i].number ||
            data[i].name != dataTestNISN[i].name ||
            data[i].value != dataTestNISN[i].value) {
            testPassed = false;
            break; // Stop early if a mismatch is found
        }
    }

    if (testPassed) {
        cout << "Test based on NISN passed." << endl;
    } else {
        cout << "Test based on NISN not passed." << endl;
    }

    Data dataReset[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };


    for (int i = 0; i < total; i++) {
        data[i] = dataReset[i];
    }

    Data dataTestValue[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9965653989, "Arief Budiman", 60},
        {9963959682, "Rio Alfandra", 55}
    };

    cout << "\n";
    cout << "==============================" << endl;
    cout << "Insertion Sort Based on Value" << endl;
    cout << "==============================" << endl;
    
        for (int j = 1; j < total; j++) {
        int i = j-1;
        Data temp = data[j];
        while (i >= 0 && data[i].value < temp.value){
            data[i+1] = data[i];
            i--;
        }
        data[i+1] = temp;
    }
    
    cout << "Data After Sorting: " << endl;
    showData(data, total);
    
    testPassed = true;
    for (int i = 0; i < total; i++) {
        if (data[i].number != dataTestValue[i].number ||
            data[i].name != dataTestValue[i].name ||
            data[i].value != dataTestValue[i].value) {
            testPassed = false;
            break; // Stop early if a mismatch is found
        }
    }

    if (testPassed) {
        cout << "Test based on Value passed." << endl;
    } else {
        cout << "Test based on Value not passed." << endl;
    }
    
    return 0;
}