class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> list[str]:
        L = text.split(' ')
        ans = []
        for i in range(len(L) - 2):
            if (L[i], L[i + 1]) == (first, second):
                ans.append(L[i + 2])
        return ans

a = Solution()
print(a.findOcurrences(text = "alice is a good girl she is a good student", first = "a", second = "good"))
print(a.findOcurrences(text = "we will we will rock you", first = "we", second = "will"))
# print(a.findOcurrences())