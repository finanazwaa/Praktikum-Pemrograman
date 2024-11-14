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
    
    cout << "Data: " << endl;
    showData(data, total);
    cout << endl;
    
    int searched = 60;
    cout << "Value searched: " << searched << endl;
    
bool found = false;
    for (int i = 0; i < total; i++) {
        if (data[i].value == searched) {
            found = true;
            cout << "The data is found: " << endl;
            cout << "NISN: " << data[i].number << "\t" << "Name: " << data[i].name << "\t" << "Value: " << data[i].value << endl;
            data[i].name = "Joko";
        }
    }
    
    if (!found) {
        cout << "The data is not found." << endl;
    }

    cout << endl;
    cout << "Data After Changed To Joko: " << endl;
    showData(data, total);
    cout << endl;
    
    return 0;
}
