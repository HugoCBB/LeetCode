#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    int a = nums[0];
    int b = nums[1];
    
    for (int i = 1; i < nums.size(); i++) {
        if (a + b == target) {
            return vector{i, i + 1};
        }
        
    }
    
    return vector{-1};
}


