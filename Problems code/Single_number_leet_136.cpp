#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int val : nums) {
            ans = ans ^ val;
        }

        return ans;
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    cout << "Single number = " << obj.singleNumber(nums) << endl;

    return 0;
}