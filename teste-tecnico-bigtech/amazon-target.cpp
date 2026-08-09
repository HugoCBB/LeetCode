#include<iostream>
#include<vector>

template <typename T>
class Solution {
public:
    int clean_array(std::vector<T> nums,int value) {
        int aux = 0;
        std::vector<T> newNums;
        for(size_t i = 0; i < nums.size(); i++) {
            std::cout << nums[i] << '-';
            if (value != nums[i]) {
                newNums.push_back(nums[i]);
                aux++;
            }
        }

        std::cout << "\n============= \n";
        for (size_t i = 0; i < newNums.size(); i++) {
            std::cout << newNums[i] << "-";
        }
        return aux;
    }
};


int main() {
    Solution<int> s;
    std::vector<int> nums{1,2,3,20,4,5,6};
    std::cout << s.clean_array(nums, 20) << '\n'; 
    
    return 0;
}