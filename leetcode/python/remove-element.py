from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = 0
        for item in nums:
            if item != val:
                nums[k] = item
                k += 1
        return k


if __name__ == "__main__":
    nums = [3, 2, 2, 3]
    k = Solution().removeElement(nums, 3)
    print(k, nums[:k])
