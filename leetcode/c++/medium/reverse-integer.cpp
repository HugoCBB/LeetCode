#include<iostream>
#include<string>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        std::string num = std::to_string(x), newString;
        bool negativo = (num[0] == '-');
        int start = negativo ? 1 : 0;

        for(int i = num.size() - 1; i >= start; i--) {
            newString += num[i];
        };

        if(negativo) newString = "-" + newString;

        long long val = std::stoll(newString);
        if (val > INT_MAX || val < INT_MIN) return 0;
        return static_cast<int>(val);              
    };
};

int main(void) {
    Solution s;
    std::cout << s.reverse(1534236469);
}