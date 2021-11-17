class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        for ch in set(ransomNote):
            if ransomNote.count(ch) > magazine.count(ch):
                return False
        return True

a = Solution()
print(a.canConstruct(ransomNote = "a", magazine = "b"))
print(a.canConstruct(ransomNote = "aa", magazine = "ab"))
print(a.canConstruct(ransomNote = "aa", magazine = "aab"))