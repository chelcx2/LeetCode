class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if len(word) <= 1:
            return True
        if ord('a') <= ord(word[0]) <= ord('z'):
            for ch in word[1:]:
                if ch != ch.lower():
                    return False
            return True
        else:
            if ord('a') <= ord(word[1]) <= ord('z'):
                for ch in word[2:]:
                    if ch != ch.lower():
                        return False
                return True
            else:
                for ch in word[2:]:
                    if ch != ch.upper():
                        return False
                return True
            
a = Solution()
print(a.detectCapitalUse(word = "USA"))
print(a.detectCapitalUse(word = "FlaG"))