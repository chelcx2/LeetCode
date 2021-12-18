import re
class Solution:
    def reorderSpaces(self, text: str) -> str:
        space = text.count(' ')
        L = text.split(' ')
        L2 = [s for s in L if s]
        word_num = len(L2)
        if word_num == 1:
            return L2[0] + ' ' * space
        return (' ' * (space // (word_num - 1))).join([s for s in L if s]) + ' ' * (space % (word_num - 1))



a = Solution()
print(a.reorderSpaces(text = "  this   is  a sentence "))
print(a.reorderSpaces(text = " practice   makes   perfect"))