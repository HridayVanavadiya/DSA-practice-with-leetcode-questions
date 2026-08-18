#include<iostream>
using namespace std;

int type1() {
    int n;
    cout << "enter the number of rows ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 'A';                                    // for ABC
        for (int j = 0; j < n; j++) {                     //     ABC
            cout << ch;                                   //     ABC
            ch++;
        }
        cout << endl;
    }
    return 0;
}

int type2() {
    int n;
    cout << "enter the number of rows ";
    cin >> n;

    int starting = 1;                                  // for 123
                                                       //     456
    for (int i = 0; i < n; i++) {                      //     789
        for (int j = 0; j < n; j++) {
            cout << starting;
            starting++;
        }
        cout << endl;
    }
    return 0;
}

int main() {
    type1();
    type2();
    return 0;
}