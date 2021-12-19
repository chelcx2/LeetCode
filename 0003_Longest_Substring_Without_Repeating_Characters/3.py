class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 1:
            return 1
        cand = set()
        for start in range(len(s)):
            sub = {s[start]}
            for offset in range(1, len(s) - start):
                # print(f's = {start}, o = {offset}')
                if s[start + offset] in sub:
                    cand.add(offset)
                    break
                else:
                    sub.add(s[start + offset])
            else:
                cand.add(offset + 1 if start != len(s) - 1 else 0)
            # print(cand)
        return max(cand) if s else 0
                
a = Solution()
print(a.lengthOfLongestSubstring(s = "abcabcbb"))
print(a.lengthOfLongestSubstring(s = "bbbbb"))
print(a.lengthOfLongestSubstring(s = "pwwkew"))
print(a.lengthOfLongestSubstring(s = ' '))