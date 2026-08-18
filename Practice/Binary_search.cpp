#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // To avoid potential overflow

        if(target > arr[mid]) {
            start = mid + 1;
        } else if(target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd length
    int target1 = 12;


    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even length
    int target2 = 4;

    cout << "Index of " << target1 << " in arr1: " << binarySearch(arr1, target1) << endl;
    cout << "Index of " << target2 << " in arr2: " << binarySearch(arr2, target2) << endl;

    return 0;
}