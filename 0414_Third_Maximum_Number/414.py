class Solution:
    def thirdMax(self, nums: list[int]) -> int:
        nums = list(set(nums))
        nums.sort(reverse = True)
        if len(nums) >= 3:
            return nums[2]
        return nums[0]

a = Solution()
print(a.thirdMax(nums = [3,2,1]))
print(a.thirdMax(nums = [2,2,3,1]))