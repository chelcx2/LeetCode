class Solution:
    def maximumGap(self, nums: list[int]) -> int:
        if len(nums) < 2:
            return 0
        nums.sort()
        # print(nums)
        diff = 0
        for i in range(1, len(nums)):
            if nums[i] - nums[i - 1] > diff:
                diff = nums[i] - nums[i - 1]
        return diff

a = Solution()
print(a.maximumGap(nums = [3,6,9,1]))