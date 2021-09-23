class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        times = {}
        th = len(nums) // 2
        for i in nums:
            if i in times.keys():
                times[i] += 1
                if times[i] > th:
                    return i
            else:
                times[i] = 1
        return nums[0]
a = Solution()
print(a.majorityElement(nums = [3,2,3]))
print(a.majorityElement(nums = [2,2,1,1,1,2,2]))