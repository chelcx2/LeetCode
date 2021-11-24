class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        return sorted([i * i for i in nums])

a = Solution()
print(a.sortedSquares(nums = [-4,-1,0,3,10]))
print(a.sortedSquares(nums = [-7,-3,2,3,11]))