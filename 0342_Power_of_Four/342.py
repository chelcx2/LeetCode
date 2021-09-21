class Solution:
    def isPowerOfFour(self, num: int) -> bool:
        if num == 0:
            return False
        if num == 1:
            return True
        while 1:
            mod = num % 4
            num /= 4
            if num == 1:
                return True
            if mod != 0:
                return False
a = Solution()
print(a.isPowerOfFour(num = 16))
print(a.isPowerOfFour(num = 5))
print(a.isPowerOfFour(num = 1))