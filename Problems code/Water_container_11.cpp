#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxArea = 0;
    int lp = 0;
    int rp = height.size()-1;

    while(lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currArea = w * ht;
        maxArea = max(maxArea, currArea);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxArea;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int ans = maxArea(height);
    cout << ans << endl;
    return 0;
}