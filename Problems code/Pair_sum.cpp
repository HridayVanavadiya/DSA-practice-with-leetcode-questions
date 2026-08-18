#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     int n = 4;
//     int arr[n] = {2, 7, 11, 15};
//     int target = 26;
//     int pairSum = 0;

//     int i = 0;
//     int j = n-1;
//     while(i < j) {
//         pairSum = arr[i] + arr[j];
//         if (pairSum < target) {
//             i++;
//         } else if (pairSum > target) {
//             j--;
//         } else {
//             cout << i << ", " << j << endl;
//             break;
//         }
//     }
// }




// using vectors and funtions

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0;
    int j = n-1;

    while (i < j){
        int pairSum = nums[i] + nums[j];
        if (pairSum < target) {
            i++;
        } else if (pairSum > target) {
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}