class Solution:
    def prefixCount(self, words: list[str], pref: str) -> int:
        cnt = 0
        for w in words:
            if not w.find(pref):
                cnt += 1
        return cnt

a = Solution()
print(a.prefixCount(words = ["pay","attention","practice","attend"], pref = "at"))
