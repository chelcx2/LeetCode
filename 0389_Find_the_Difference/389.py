class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        L1, L2 = sorted(s), sorted(t)
        for i in range(min(len(L1), len(L2))):
            if L1[i] != L2[i]:
                return L1[i] if len(L1) > len(L2) else L2[i]
        return L1[-1] if len(L1) > len(L2) else L2[-1]

a = Solution()
print(a.findTheDifference(s = "abcd", t = "abcde"))
print(a.findTheDifference(s = "", t = "y"))
print(a.findTheDifference(s = "a", t = "aa"))
print(a.findTheDifference(s = "ae", t = "aea"))