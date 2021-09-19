class Solution:
    def licenseKeyFormatting(self, s: str, k: int) -> str:
        all_char = ''.join([ch.upper() for ch in s if ch != '-'])
        ans = ''
        while True:
            if len(all_char) <= k:
                ans = all_char + '-' + ans
                return ans[:-1]
            ans = all_char[-k:] + '-' + ans
            all_char = all_char[:-k]
a = Solution()
print(a.licenseKeyFormatting(s = "5F3Z-2e-9-w", k = 4))
print(a.licenseKeyFormatting(s = "2-5g-3-J", k = 2))