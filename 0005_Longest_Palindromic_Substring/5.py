class Solution:
    def longestPalindrome(self, s: str) -> str:
        length = len(s)
        while length > 1:
            for start_idx in range(len(s) - length + 1):
                tmp = s[start_idx : start_idx + length]
                if tmp == tmp[::-1]:
                    return tmp
            length -= 1
        return s[0]
a = Solution()
print(a.longestPalindrome(s = "babad"))
print(a.longestPalindrome(s = "cbbd"))