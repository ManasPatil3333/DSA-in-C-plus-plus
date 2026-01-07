#include <iostream>
#include <vector>
using namespace std;

vector <int> RemoveElement(vector <int> nums, int val) {
    vector <int> res;
    if(nums.empty()) return res;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] != val) {
            res.push_back(nums[i]);
        }
    }
    return res;
}

int main() {
    vector <int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    vector <int> result = RemoveElement(nums, val);
    for(int x : result) {
        cout<<x<<"\t";
    }
    return 0;
}