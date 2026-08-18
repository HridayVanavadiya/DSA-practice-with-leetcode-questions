#include<iostream>
using namespace std;

int type1() {
    int n;
    cout << "enter the no of rows ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int type2() {
    int n;
    cout << "enter the no of rows ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << i+1;
        }
        cout << endl;
    }
}

int type3() {
    int n;
    cout << "enter the no of rows ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << j+1;
        }
        cout << endl;
    }
}

int main() {
    type1();
    type2();
    type3();
    return 0;
}