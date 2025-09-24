#include <iostream>
#include <vector>
using namespace std;

vector <int> TwoSum(vector <int> nums, int target) {
    int size = nums.size();
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(i!=j && nums[i]+nums[j]==target) {
                return {i,j};
            }
        }
    }
    return {};
}

int main() {
    vector <int> nums = {3,2,4};
    int target = 6;
    vector <int> res = TwoSum(nums, target);
    for(int x : res) {
        cout<<x;
    }
    return 0;
}