class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> list[int]:
        ans = []
        for i in range(left, right + 1):
            for digit in str(i):
                if digit == '0' or i % int(digit) != 0:
                    break
            else:
                ans.append(i)
        return ans

a = Solution()
print(a.selfDividingNumbers(left = 1, right = 22))
print(a.selfDividingNumbers(left = 47, right = 85))