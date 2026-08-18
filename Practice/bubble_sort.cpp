#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bubbleSort(int arr[], int n) {

    bool isSwap = false;

    for(int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap) {
            return;
        }
    }
}

void printArray(int arr[], int n) {
    cout << "the sorted array is ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[n] = {4, 8, 1, 9, 7};

    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}