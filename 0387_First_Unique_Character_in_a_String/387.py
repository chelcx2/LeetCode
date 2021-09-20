class Solution:
    def firstUniqChar(self, s: str) -> int:
        for idx in range(len(s)):
            if s.count(s[idx]) == 1:
                return idx
        return -1
a = Solution()
print(a.firstUniqChar(s = "leetcode"))
print(a.firstUniqChar(s = "loveleetcode"))
print(a.firstUniqChar(s = "aabb"))