class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l = 0
        c = False
        for item in reversed(s):
            if len(s) <= 1 and l <= 1:
                return 1

            if item == ' ' and c:
                return l
            
            if item != ' ' :
                c = True
                l += 1
        

        return l




s = Solution()

print(s.lengthOfLastWord("a "))