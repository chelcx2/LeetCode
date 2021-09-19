class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n == 0:
            return False
        while True:
            if n == 1:
                return True
            if n % 3 == 0:
                n /= 3
            else:
                return False

a = Solution()
print(a.isPowerOfThree(n = 27))
print(a.isPowerOfThree(n = 0))
print(a.isPowerOfThree(n = 9))
print(a.isPowerOfThree(n = 45))