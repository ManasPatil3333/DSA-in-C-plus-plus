#include <iostream>
#include <vector>
using namespace std;

string LongestCommonPrefix(vector <string> strs) {
    if(strs.empty()) return "";
    string prefix = strs[0];
    for(int i=1; i<strs.size(); i++) {
        int j = 0;
        while(j<strs.size() && j<prefix.size() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0,j);
        if(prefix.empty()) return "";
    }
    return prefix;
}

int main() {
    vector <string> strs = {"manas", "man", "mana"};
    string str = LongestCommonPrefix(strs);
    cout<<"String: "<<str;
    return 0;
}