def rotate(nums, k):
    """
    Do not return anything, modify nums in-place instead.
    """
    for _ in range(k):
        tmp = nums.pop()
        nums.insert(0, tmp)
    print(nums)
rotate(nums = [1,2,3,4,5,6,7], k = 3)
rotate(nums = [-1,-100,3,99], k = 2)