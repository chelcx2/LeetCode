class Solution:
    def sortArray(self, nums: list[int]) -> list[int]:
        nums.sort()
        return nums

a = Solution()
print(a.sortArray(nums = [5,2,3,1]))