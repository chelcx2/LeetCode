class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        ans = []
        zero = 0
        for i in nums:
            if i == 0:
                zero += 1
            else:
                ans.append(i)
        ans.extend([0] * zero)
        for i in range(len(ans)):
            nums[i] = ans[i]
        # print(nums)

a = Solution()
a.moveZeroes(nums = [0,1,0,3,12])