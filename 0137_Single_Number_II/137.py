def singleNumber(nums):
    for i in nums:
        if nums.count(i) == 1:
            return i
print(singleNumber(nums = [2,2,3,2]))
print(singleNumber(nums = [0,1,0,1,0,1,99]))