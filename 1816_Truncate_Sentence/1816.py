class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        return ' '.join(s.split()[:k])

a = Solution()
print(a.truncateSentence(s = "Hello how are you Contestant", k = 4))