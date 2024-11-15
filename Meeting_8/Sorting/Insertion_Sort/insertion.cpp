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
    
    return 0;
}