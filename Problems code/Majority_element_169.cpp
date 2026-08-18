#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums) {
    int freq = 0;
    int ans = 0;

    for(int i=0; i<nums.size(); i++) {
        if(freq == 0) {
            ans = nums[i];
        } if (ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {5, 5, 2, 1, 5, 2, 5, 5, 5, 6, 5, 5, 4, 5, 5, 4};

    int ans = majorityElement(nums);
    cout << ans << endl << nums.size();
    return 0;
}