// sort an array with 0s, 1s and 2s the array contains "n" number of 0, 1 and 2 and we have to sort the array so that
// all the 0s comes first and then all the 1s and then all the 2s.
// we are going to solve the question in 3 ways:
// 1. brute force
// 2. optimised
// 3. best optimal approach

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sortOptimize(vector<int>& arr, int n) {
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            count0++;
        } else if(arr[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    int idx = 0;
    for(int i = 0; i < count0; i++) {
        arr[idx++] = 0;
    }
    for(int i = 0; i < count1; i++) {
        arr[idx++] = 1;
    }
    for(int i = 0; i < count2; i++) {
        arr[idx++] = 2;
    }
}


//dutch national flag algorithm (optimal approach)
int dutchNationalFlag(vector<int>& arr, int n) {
    int low = 0, mid = 0, high = n-1;
    while(mid <= high) {
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[high], arr[mid]);
            high--;
        }
    } 
}



void printArray(vector<int> arr, int n) {
    cout << "the sorted array is ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = arr.size();

    dutchNationalFlag(arr, n);
    printArray(arr, n);
    return 0;
}