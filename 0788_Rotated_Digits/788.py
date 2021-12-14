class Solution:
    def rotatedDigits(self, n: int) -> int:
        rotate = {'0': '0', '1': '1', '2': '5', '3': '-', '4': '-',  \
                  '5': '2', '6': '9', '7': '-', '8': '8', '9': '6'}
        ans = 0
        for i in range(1, n + 1):
            new = ''
            for ch in str(i):
                new += rotate[ch]
            # print(str(i), new)
            if new != str(i) and '-' not in new:
                ans += 1
        return ans

a = Solution()
# print()
print(a.rotatedDigits(n = 10))