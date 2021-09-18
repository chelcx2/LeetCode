class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        pwr = 0
        ans = 0
        for ch in columnTitle[::-1]:
            ans += (ord(ch) - ord('A') + 1) * (26 ** pwr)
            # print(ans)
            pwr += 1
        return ans

a = Solution()
print(a.titleToNumber(columnTitle = "A"))
print(a.titleToNumber(columnTitle = "AB"))
print(a.titleToNumber(columnTitle = "ZY"))
print(a.titleToNumber(columnTitle = "FXSHRXW"))