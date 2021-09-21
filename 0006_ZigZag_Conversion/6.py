class Solution:
    def convert(self, s: str, numRows: int) -> str:
        ans = ['' for _ in range(numRows)]
        idx = 0
        if numRows == 1:
            return s
        for idx in range(len(s)):
            tmp = idx % (numRows * 2 - 2)
            if tmp < numRows:
                ans[tmp] += s[idx]
            else:
                tmp %= numRows
                ans[numRows - tmp - 2] += s[idx]
        return ''.join(ans)
a = Solution()
print(a.convert(s = "PAYPALISHIRING", numRows = 3))
print(a.convert(s = "PAYPALISHIRING", numRows = 4))
print(a.convert(s = "A", numRows = 1))