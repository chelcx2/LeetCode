class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        d = {}
        for idx in range(len(nums)):
            if nums[idx] in d.keys():
                d[nums[idx]].append(idx)
            else:
                d[nums[idx]] = [idx]
        # print(d)
        for val in d.keys():
            if len(d[val]) > 1:
                prev = d[val][0]
                for idx in d[val][1:]:
                    if idx - prev <= k:
                        return True
                    prev = idx
        return False


a = Solution()
print(a.containsNearbyDuplicate(nums = [1,2,3,1], k = 3))
print(a.containsNearbyDuplicate(nums = [1,0,1,1], k = 1))
print(a.containsNearbyDuplicate(nums = [1,2,3,1,2,3], k = 2))