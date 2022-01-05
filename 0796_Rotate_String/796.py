class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        idx = [i for i in range(len(goal)) if goal[i] == s[0]]
        print(idx)
        for i in idx:
            if s[:len(s) - i] == goal[i:] and s[len(s) - i:] == goal[:i]:
                return True
        return False
a = Solution()
print(a.rotateString(s = "abcde", goal = "cdeab"))
print(a.rotateString(s = "abcde", goal = "abced"))
print(a.rotateString(s = "gcmbf", goal = "fgcmb"))