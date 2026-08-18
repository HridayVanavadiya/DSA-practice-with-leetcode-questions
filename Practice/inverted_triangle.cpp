#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of rows ";
    cin >> n;

    for (int i=0; i<n; i++) {
        // spaces
        for (int j=0; j<i; j++) {
            cout << " ";
        }

        //for numbers
        for (int k=0; k<n-i; k++) {
            cout << i+1;
        }
        cout << endl;
    }
}