#include <iostream>
#include <vector>
using namespace std;

vector<int> RemoveDuplications(vector<int> nums) {
    vector<int> res;
    if(nums.empty()) return res;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] != nums[i+1]) {
            res.push_back(nums[i]);
        }
    }
    return res;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    vector<int> result = RemoveDuplications(nums);
    for(int x : result) {
        cout<<x<<"\t";
    }
    return 0;
}