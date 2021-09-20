class Solution:
    def canWinNim(self, n: int) -> bool:
        return n % 4 != 0

a = Solution()
print(a.canWinNim(n = 4))
print(a.canWinNim(n = 1))
print(a.canWinNim(n = 2))