class Solution:
    def addToArrayForm(self, num: list[int], k: int) -> list[int]:
        return [ch for ch in str(int(''.join(list(map(str, num)))) + k)]

a = Solution()
print(a.addToArrayForm(num = [1,2,0,0], k = 34))