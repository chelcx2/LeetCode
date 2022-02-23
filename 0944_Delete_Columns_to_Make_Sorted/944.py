class Solution:
    def minDeletionSize(self, strs: list[str]) -> int:
        ans = 0
        for s in list(zip(*strs)):
            if list(s) != sorted(list(s)):
                ans += 1
        return ans

a = Solution()
print(a.minDeletionSize(strs = ["cba","daf","ghi"]))
print(a.minDeletionSize(strs = ["a","b"]))
print(a.minDeletionSize(strs = ["zyx","wvu","tsr"]))