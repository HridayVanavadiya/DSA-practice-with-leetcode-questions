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

    // swapping for numbers so that they can be reversed
    int start = 0;
    int end = (n-1);
    int temp, temp1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    //print the reverse array
    for (int i=0; i<n; i++) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}