#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of rows ";
    cin >> n;

    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        //numbers
        for(int k=0; k<i+1; k++) {
            cout << k+1;
        }

        // another set of number
        for (int j=i; j>0; j--){
            cout << j;
        }
        cout << endl;
    }
}