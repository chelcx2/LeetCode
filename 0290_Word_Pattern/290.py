class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        bijection = {}
        L = s.split(' ')
        if len(pattern) != len(L):
            return False
        idx = 0
        for ch in pattern:
            if ch in bijection.keys():
                if bijection[ch] == L[idx]:
                    idx += 1
                    continue
                return False
            else:
                if L[idx] not in bijection.values():
                    bijection[ch] = L[idx]
                    idx += 1
                else:
                    return False
        return True
a = Solution()
print(a.wordPattern(pattern = "abba", s = "dog cat cat dog"))
print(a.wordPattern(pattern = "abba", s = "dog cat cat fish"))
print(a.wordPattern(pattern = "aaaa", s = "dog cat cat dog"))
print(a.wordPattern(pattern = "abba", s = "dog dog dog dog"))