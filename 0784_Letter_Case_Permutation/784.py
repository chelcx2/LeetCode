class Solution:
    def letterCasePermutation(self, s: str) -> list[str]:
        ans = [s[0].upper(), s[0].lower()] if ord('a') <= ord(s[0].lower()) <= ord('z') else [s[0]]
        for ch in s[1:]:
            if ord('a') <= ord(ch.lower()) <= ord('z'):
                ans *= 2
                for i in range(len(ans) // 2):
                    ans[i] += ch.upper()
                for i in range(len(ans) // 2, len(ans)):
                    ans[i] += ch.lower()
            else:
                for i in range(len(ans)):
                    ans[i] += ch
            # print(ans)
        return ans
        

a = Solution()
print(a.letterCasePermutation(s = "a1b2"))