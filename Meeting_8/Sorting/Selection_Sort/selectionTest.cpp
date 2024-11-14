#include <iostream>
#include <string>
using namespace std;

struct Data {
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
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    cout << "Data Before Sorting: " << endl;
    showData(data, total);
    cout << endl;
    
    cout << "============================" << endl;
    cout << "Selection Sort Based on NISN" << endl;
    cout << "============================" << endl;
    
    for (int i = 0; i < total - 1; i++) {
        int min = i;
        for (int j = i + 1; j < total; j++) {
            if (data[j].number < data[min].number) {
                min = j;
            }
        }
        Data temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
    
    cout << "Data After Sorting: " << endl;
    showData(data, total);
    cout << "\n";
    
    bool testPassed = true;
    for (int i = 0; i < total; i++) {
        if (data[i].number != dataTestNISN[i].number ||
            data[i].name != dataTestNISN[i].name ||
            data[i].value != dataTestNISN[i].value) {
            testPassed = false;
            break;
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
        {9963959682, "Rio Alfandra", 55},
        {9970272750, "Achmad Yaumil Fadjri R", 60},
        {9965653989, "Arief Budiman", 60},
        {9952382180, "Ari Lutfianto", 65},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9960312699, "Handi Ramadhan", 90}
    };

    cout << "============================" << endl;
    cout << "Selection Sort Based on Value" << endl;
    cout << "============================" << endl;
    
    for (int i = 0; i < total - 1; i++) {
        int min = i;
        for (int j = i + 1; j < total; j++) {
            if (data[j].value < data[min].value) {
                min = j;
            }
        }
        Data temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
    
    cout << "Data After Sorting: " << endl;
    showData(data, total);

     testPassed = true;
    for (int i = 0; i < total; i++) {
        if (data[i].number != dataTestValue[i].number ||
            data[i].name != dataTestValue[i].name ||
            data[i].value != dataTestValue[i].value) {
            testPassed = false;
            break;
        }
    }

    if (testPassed) {
        cout << "Test based on Value passed." << endl;
    } else {
        cout << "Test based on Value not passed." << endl;
    }
    
    return 0;
}
