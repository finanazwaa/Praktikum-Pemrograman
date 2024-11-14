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
    cout << "Sorted Data: " << endl;
    cout << "============================" << endl;
    
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - 1; j++) {
            if (data[j].number > data[j+1].number) {
                Data temp = data[j] ;
                data[j] = data[j+1];
                data[j+1] = temp;
            }
    }
    }
    
    cout << "Data After Sorting: " << endl;
    showData(data, total);
    cout << "\n";
    
    long long searched = 9950310962;
    cout << "NISN Searched: " << searched << endl;
    
bool found = false;
    int i = 0, j = total - 1, mid;
    while (!found && i <= j) {
        mid = (i + j) / 2;
        if (data[mid].number < searched) {
            i = mid + 1;
        } else if (data[mid].number == searched) {
            found = true;
        } else {
            j = mid - 1;
        }
    }
    
if (!found) {
        cout << "The data is not found." << endl;
    } else {
        cout << "The data is found: " << endl;
        cout << "Name: " << data[mid].name << "\t" << " Value: " << data[mid].value << endl;
    }
    return 0;
}
