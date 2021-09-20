class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        temp = t
        for ch in s:
            try:
                idx = temp.index(ch)
                temp = temp[idx + 1:]
            except:
                return False
        return True

a = Solution()
print(a.isSubsequence(s = "abc", t = "ahbgdc"))
print(a.isSubsequence(s = "axc", t = "ahbgdc"))