#include<iostream>
#include<string>
#include <set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() < 2) return s.size();
        
        set<char> filter;
        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < (int)s.size(); right++) {
            while (filter.count(s[right])) {
                filter.erase(s[left]);
                left++;
            }

            filter.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};

int main() {
    Solution s;

    s.lengthOfLongestSubstring("abbab");
    return 0;
}