class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:
        subset = []
        for i in range(2 ** len(nums)):
            choose = bin(i)[2:].rjust(len(nums), '0')
            temp = []
            for idx in range(len(choose)):
                if choose[idx] == '1':
                    temp.append(nums[idx])
            subset.append(temp)
        return subset

a = Solution()
print(a.subsets(nums = [1,2,3]))
print(a.subsets(nums = [0]))