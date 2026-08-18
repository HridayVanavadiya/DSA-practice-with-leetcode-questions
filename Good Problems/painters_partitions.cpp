#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int maxAlloted) {
    int painters = 1, walls = 0;

    for(int i = 0; i<n; i++) {
        if(arr[i] > maxAlloted) {
            return false;
        }

        if(walls + arr[i] <= maxAlloted) {
            walls += arr[i];
        } else {
            painters++;
            walls = arr[i];
        }
    }

    return painters > m ? false : true;
}

int painterPartition(vector<int> arr, int n, int m) {
    if(m > n) {
        return -1;
    }

    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }

    int max = 0;

    for(int i = 1; i<n; i++) {
        if(arr[i] > arr[i-1]) {
            max = arr[i];
        } else {
            max = arr[i-1];
        }
    }

    int ans = -1;
    int start = max, end = sum;

    while(start < end) {
        int mid = start + (end - start)/2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << painterPartition(arr, n, m) << endl;
    return 0;
}