class Solution:
    def convertToBase7(self, num: int) -> str:
        if num == 0:
            return '0'
        if num >= 0:
            s = True
        else:
            s = False
            num = -num
        ans = ''
        while num:
            ans = str(num % 7) + ans
            num //= 7
        return ans if s else '-' + ans

a = Solution()
print(a.convertToBase7(num = 100))
print(a.convertToBase7(num = -7))