class Solution:
    def intersection(self, nums: list[list[int]]) -> list[int]:
        ans = set(nums[0])
        for lst in nums[1:]:
            ans = ans.intersection(set(lst))
        ans = list(ans)
        ans.sort()
        return ans
