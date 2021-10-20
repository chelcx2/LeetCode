class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        L = [start + 2 * i for i in range(n)]
        ans = 0
        for i in L:
            ans ^= i
        return ans

a = Solution()
print(a.xorOperation(n = 5, start = 0))
print(a.xorOperation(n = 4, start = 3))
print(a.xorOperation(n = 1, start = 7))
print(a.xorOperation(n = 10, start = 5))