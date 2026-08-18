#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int c, int minDistace) {
    
    int cows = 1, lastStall = arr[0];

    for (int i = 0; i<n; i++) {
        if ((arr[i] - lastStall) >= minDistace) {
            cows++;
            lastStall = arr[i];
        }

        if (cows == c) {
            return true;
        }
    }

    return false;
}

int aggresiveCow(vector<int> &arr, int n, int c) {
    sort(arr.begin(), arr.end());
    if (n < c) {
        return -1;
    }

    int ans = -1;
    int start = 1, end = (arr[n-1] - arr[0]);

    while(start <= end) {
        int mid = start + (end - start)/2;
        if(isPossible(arr, n, c, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = 5, c = 3;

    cout << aggresiveCow(arr, n, c) << endl;
    return 0;
}