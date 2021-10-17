class Solution:
    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:
        subset = []
        for i in range(2 ** len(nums)):
            choose = bin(i)[2:].rjust(len(nums), '0')
            temp = ()
            for idx in range(len(choose)):
                if choose[idx] == '1':
                    temp = temp + (nums[idx], )
            subset.append(tuple(sorted(temp)))
        return list(set(subset))

a = Solution()
print(a.subsetsWithDup(nums = [1,2,2]))
print(a.subsetsWithDup(nums = [0]))