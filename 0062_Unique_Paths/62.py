def fac(i: int) -> int:
    if i <= 1:
        return 1
    else:
        return i * fac(i-1)

class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        return fac(m + n - 2) // (fac(m - 1) * fac(n - 1))

a = Solution()
print(a.uniquePaths(m = 3, n = 7))
print(a.uniquePaths(m = 3, n = 2))