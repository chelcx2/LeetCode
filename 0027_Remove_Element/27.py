class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        tmp = len(nums) - nums.count(val)
        while val in nums:
            nums.remove(val)
            # print(nums)
        return tmp

a = Solution()
print(a.removeElement(nums = [0,1,2,2,3,0,4,2], val = 2))