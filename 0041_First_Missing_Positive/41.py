def firstMissingPositive(nums) -> int:
    i = 1
    while i in nums:
        i += 1
    return i

print(firstMissingPositive(nums = [3,4,-1,1]))