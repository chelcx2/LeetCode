def searchInsert(nums, target: int) -> int:
    try:
        return nums.index(target)
    except:
        for i in nums:
            if i > target:
                return nums.index(i)
        return len(nums)

print(searchInsert(nums = [1,3,5,6], target = 5))
print(searchInsert(nums = [1,3,5,6], target = 2))
print(searchInsert(nums = [1,3,5,6], target = 7))
print(searchInsert(nums = [1,3,5,6], target = 0))
print(searchInsert(nums = [1], target = 0))
