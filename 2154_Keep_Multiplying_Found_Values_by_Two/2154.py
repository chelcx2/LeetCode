class Solution:
    def findFinalValue(self, nums: list[int], original: int) -> int:
        nums = list(set(nums))
        nums.sort()
        while original in nums:
            original *= 2
        return original

a = Solution()
print(a.findFinalValue(nums = [5,3,6,1,12], original = 3))