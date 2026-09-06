#include<iostream>
#include<vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        using namespace std;
        int aux = 0;
        
        for(int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[aux]) {
                aux++;
                nums[aux] = nums[i];
            }
        }
        return aux + 1;
    }
};


int main(){
    Solution s;
    std::vector<int> nums{1,1,2,2,2,3};
    std::cout << s.removeDuplicates(nums) << '\n'; 
    return 0;
}