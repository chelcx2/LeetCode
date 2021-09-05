class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)

a = Solution()
print(a.isAnagram(s = "anagram", t = "nagaram"))
print(a.isAnagram(s = "rat", t = "car"))