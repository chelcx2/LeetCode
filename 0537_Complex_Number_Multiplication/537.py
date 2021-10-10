class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        num1 = num1.split('+')
        num2 = num2.split('+')
        re1, im1 = int(num1[0]), int(num1[1][:-1])
        re2, im2 = int(num2[0]), int(num2[1][:-1])
        re, im = re1 * re2 - im1 * im2, re1 * im2 + re2 * im1
        return f'{re}+{im}i'

a = Solution()
print(a.complexNumberMultiply(num1 = "1+1i", num2 = "1+1i"))
print(a.complexNumberMultiply(num1 = "1+-1i", num2 = "1+-1i"))