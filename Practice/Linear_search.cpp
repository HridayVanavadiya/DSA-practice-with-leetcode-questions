#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of elements in array ";
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) {
        cout << "enter the " << (i+1) << " element ";
        cin >> arr[i];
    }

    int num;
    cout << "enter the number to find ";
    cin >> num;

    for (int i=0; i<n; i++) {
        if (arr[i] == num) {
            cout << "the number " << num << " is found at " << (i+1) << " position";
            return 0;
        }
    }

    cout << "Number not found";
    return 0;
}