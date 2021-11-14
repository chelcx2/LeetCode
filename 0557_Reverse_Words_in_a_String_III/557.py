class Solution:
    def reverseWords(self, s: str) -> str:
        return ' '.join([sub[::-1] for sub in s.split(' ')])
a = Solution()
print(a.reverseWords(s = "Let's take LeetCode contest"))
print(a.reverseWords(s = "God Ding"))