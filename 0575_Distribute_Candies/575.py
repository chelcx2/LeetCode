class Solution:
    def distributeCandies(self, candyType: list[int]) -> int:
        eat = len(candyType) // 2
        return eat if len(set(candyType)) > eat else len(set(candyType))
a = Solution()
print(a.distributeCandies(candyType = [1,1,2,2,3,3]))
print(a.distributeCandies(candyType = [1,1,2,3]))
print(a.distributeCandies(candyType = [6,6,6,6]))