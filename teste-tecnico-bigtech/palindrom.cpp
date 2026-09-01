#include<iostream>
#include<string>

class Solution {
    public:
    bool palindrom(std::string s) {
        int aux = s.size() - 1;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] != s[aux]) {
                return false;
            }
            aux--;
        }
        return true;
    }
};

int main() {
    Solution s;
    std::string target = "ana";
    if (s.palindrom(target)) {
        std::cout << "Is palindrom";
    } else {
        std::cout << "Is not palindrom";

    }
    

    return 0;
}