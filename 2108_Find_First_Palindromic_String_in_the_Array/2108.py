class Solution:
    def firstPalindrome(self, words: list[str]) -> str:
        for word in words:
            if word == word[::-1]:
                return word
        return ''

a = Solution()
print(a.firstPalindrome(words = ["abc","car","ada","racecar","cool"]))