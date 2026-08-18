#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// int main() {
//     int n = 7;
//     int arr[n] = {3, -4, 5, 4, -1, 7, -8};

//     int maxSum = INT_MIN;

//     for (int st=0; st<n; st++) {
//         int currSum = 0;
//         for (int end=st; end<n; end++) {
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }

//     cout << "Max subarray sum = " << maxSum << endl;

//     return 0;
// }


// now for Kadane's Algorithm (most optimised)

int main() {
    int n = 7;
    int arr[n] = {-1, -2, -3, -4, -5, -6, -7};

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout << "Max subarray sum = " << maxSum << endl;

    return 0;
}