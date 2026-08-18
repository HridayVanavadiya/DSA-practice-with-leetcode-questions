#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int selectionSort(int arr[], int n) {
    
    for(int i = 0; i < n-1; i++) {
        int smallestIndex = i;

        for (int j = i + 1; j < n; j++) {
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
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
    int arr[n] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);
    printArray(arr, n);
}