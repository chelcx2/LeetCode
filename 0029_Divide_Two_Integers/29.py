class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        ans = dividend // divisor
        if ans < -2 ** 31 or ans > 2 ** 31 - 1:
            return 2 ** 31 - 1
        if dividend % divisor == 0:
            return ans
        else:
            return ans if ans >= 0 else ans + 1

a = Solution()
print(a.divide(dividend = 10, divisor = 3))
print(a.divide(dividend = 7, divisor = -3))
print(a.divide(dividend = 0, divisor = 1))
print(a.divide(dividend = 1, divisor = 1))