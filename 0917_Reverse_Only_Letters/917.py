class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        letter_list = [chr(i) for i in range(ord('A'), ord('A') + 26)] + [chr(i) for i in range(ord('a'), ord('a') + 26)]
        # print(letter)
        ans = []
        letter = []
        for ch in s:
            if ch in letter_list:
                letter.append(ch)
        letter.reverse()
        idx = 0
        for ch in s:
            if ch in letter_list:
                ans.append(letter[idx])
                idx += 1
            else:
                ans.append(ch)
        return ''.join(ans)
a = Solution()
print(a.reverseOnlyLetters(s = "ab-cd"))
print(a.reverseOnlyLetters(s = "a-bC-dEf-ghIj"))
print(a.reverseOnlyLetters(s = "Test1ng-Leet=code-Q!"))