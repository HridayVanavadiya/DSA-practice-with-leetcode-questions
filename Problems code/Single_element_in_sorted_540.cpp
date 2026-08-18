#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int>& arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    if(n == 1) {
        return 0;
    }

    while(start <= end) {
        int mid = start + (end - start)/2;

        if(mid == 0 && arr[0] != arr[1]) return mid;
        if(mid == n-1 && arr[n-1] != arr[n-2]) return mid;

        if(arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]) return mid;

        if(mid % 2 == 0) {
            if(arr[mid - 1] == arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else {
            if(arr[mid - 1] == arr[mid]) {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 3, 3, 6, 6, 9, 9};
    cout << "the index of array is " << singleElement(arr) << endl;
    cout << "the element is " << arr[singleElement(arr)] << endl;
}