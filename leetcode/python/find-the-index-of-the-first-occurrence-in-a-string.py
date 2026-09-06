class Solution(object):
    def strStr(self, haystack: str, needle: str) -> int:
        n, m = len(haystack), len(needle)
        for i in range(n - m + 1):
            if haystack[i:i+m] == needle:
                return i
        return -1
    
    
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
        
        
        
if __name__ == "__main__":
    s = "ababaac"
    target = 'ac'
    app = Solution()
    print(app.strStr(s, target))