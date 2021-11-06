class Solution:
    def singleNumber(self, nums: list[int]) -> list[int]:
        ans = []
        nums.sort()
        if len(nums) < 2:
            return nums
        if nums[0] != nums[1]:
            ans.append(nums[0])
        for i in range(1, len(nums) - 1):
            if nums[i] != nums[i - 1] and nums[i] != nums[i + 1]:
                ans.append(nums[i])
        if nums[-1] != nums[-2]:
            ans.append(nums[-1])
        return ans
a = Solution()
print(a.singleNumber(nums = [1,2,1,3,2,5]))
print(a.singleNumber(nums = [-1,0]))
print(a.singleNumber(nums = [0, 1]))