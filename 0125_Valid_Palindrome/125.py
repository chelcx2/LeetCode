class Solution:
    def isPalindrome(self, s: str) -> bool:
        s2 = ''
        s = s.lower()
        for ch in s:
            if ch.isalnum():
                s2 += ch
        return s2 == s2[::-1]

a = Solution()
print(a.isPalindrome(s = "A man, a plan, a canal: Panama"))
print(a.isPalindrome(s = "race a car"))
print(a.isPalindrome(s = "0P"))