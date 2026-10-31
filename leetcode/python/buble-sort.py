from typing import List

def buble_sort(nums: List[int]) -> List[int]:
    aux = 1
    
    for i, n in enumerate(nums):
        if n > nums[aux]:
            nums[i] = nums[aux]
            nums[aux] = n
            
        aux += 1
    return nums if isinstance(List[int], nums) else None


print(buble_sort([3,2,1]))