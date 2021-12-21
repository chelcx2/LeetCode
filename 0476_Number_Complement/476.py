class Solution:
    def findComplement(self, num: int) -> int:
        ans = ''
        for ch in bin(num)[2:]:
            if ch == '1':
                ans += '0'
            else:
                ans += '1'
        return int(ans, 2)
a = Solution()
print(a.findComplement(5))
print(a.findComplement(1))