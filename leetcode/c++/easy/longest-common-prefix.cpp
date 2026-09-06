#include<iostream>
#include<vector>
#include<string>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        for(int i = 0; i < strs[0].length(); i++) {
            int first = strs[0][i];
            for(int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != first) {
                    return prefix;
                }
            }
            prefix += first;
        }
        return "";
    }
};


int main() {
    vector<string> trs = {"flower", "flow", "flight"};
    
    Solution s;
    cout << s.longestCommonPrefix(trs) << '\n';
    
    return 0;
}