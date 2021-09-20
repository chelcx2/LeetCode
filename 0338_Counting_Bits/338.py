class Solution:
    def countBits(self, n: int) -> list[int]:
        ans = []
        for i in range(n + 1):
            ans.append(bin(i).count('1'))
        return ans
a = Solution()
print(a.countBits(n = 5))