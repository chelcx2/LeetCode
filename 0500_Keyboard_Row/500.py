class Solution:
    def findWords(self, words: list[str]) -> list[str]:
        letter = ["qwertyuiop", "asdfghjkl", "zxcvbnm"]
        ans = []
        for word in words:
            valid = True
            if word[0].lower() in letter[0]:
                row = 0
            elif word[0].lower() in letter[1]:
                row = 1
            elif word[0].lower() in letter[2]:
                row = 2
            for ch in word[1:]:
                if ch.lower() not in letter[row]:
                    valid = False
                    break
            if valid:
                ans.append(word)
        return ans

a = Solution()
print(a.findWords(words = ["Hello","Alaska","Dad","Peace"]))
print(a.findWords(words = ["omk"]))
print(a.findWords(words = ["adsdf","sfd"]))
