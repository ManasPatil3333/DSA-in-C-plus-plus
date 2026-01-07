#include <iostream>
#include <vector>
using namespace std;

int SearchInsertPosition(vector<int> nums, int target) {
    int size = nums.size();
    int start = 0, end = size-1;
    while(start<=end) {
        int mid = start+(end-start)/2;
        if(nums[mid] == target) {
            return mid;
        } else if(nums[mid] > target) {
            end = mid-1;
        } else {
            start = mid+1;
        }
    }
    return start;
}

int main() {
    vector<int> nums = {1,3,5,6};
    int target = 2;
    int result = SearchInsertPosition(nums, target);
    cout<<result;
    return 0; 
}