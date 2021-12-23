class Solution:
    def customSortString(self, order: str, s: str) -> str:
        ans = ''
        for ch in order:
            if ch in s:
                ans += ch * s.count(ch)
                s = s.replace(ch, '')
        return ans + s
a = Solution()
print(a.customSortString(order = "cba", s = "abcd"))
print(a.customSortString(order = "cbafg", s = "abcd"))