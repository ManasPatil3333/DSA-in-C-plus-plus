#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MostWaterInContainer(vector <int> nums) {
    int left = 0, right = nums.size()-1;
    int maxArea = 0;
    while(left<right) {
        int min_height = min(nums[left], nums[right]);
        int width = right - left;
        maxArea = max(maxArea, min_height*width);
        if(nums[left] < nums[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxArea;
}

int main() {
    vector <int> nums = {1,7,6,2,5,4,8,3,8};
    int res = MostWaterInContainer(nums);
    cout<<"Water : "<<res;
    return 0;
}