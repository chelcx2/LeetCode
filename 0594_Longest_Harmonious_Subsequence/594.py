class Solution:
    def findLHS(self, nums: list[int]) -> int:
        times = {}
        ans = 0
        for i in nums:
            if i in times.keys():
                times[i] += 1
            else:
                times[i] = 1
        for i in times.keys():
            if i + 1 in times.keys() and times[i] + times[i + 1] > ans:
                ans = times[i] + times[i + 1]
        return ans

a = Solution()
print(a.findLHS(nums = [1,3,2,2,5,2,3,7]))
print(a.findLHS(nums = [1,2,3,4]))
print(a.findLHS(nums = [1,1,1,1]))