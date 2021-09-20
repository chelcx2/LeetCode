class Solution:
    def lexicalOrder(self, n: int) -> list[int]:
        return list(map(int, sorted([str(i) for i in range(1, n + 1)])))

a = Solution()
print(a.lexicalOrder(n = 13))
print(a.lexicalOrder(n = 2))