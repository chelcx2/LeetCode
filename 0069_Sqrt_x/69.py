class Solution:
    def mySqrt(self, x: int) -> int:
        ans = 0
        while ans * ans <= x:
            ans += 1
        return ans - 1
a = Solution()
print(a.mySqrt(x = 4))
print(a.mySqrt(x = 8))