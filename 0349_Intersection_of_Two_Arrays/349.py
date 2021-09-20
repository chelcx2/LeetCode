from typing import List


class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        return list(set(nums1) & set(nums2))

a = Solution()
print(a.intersection(nums1 = [1,2,2,1], nums2 = [2,2]))
print(a.intersection(nums1 = [4,9,5], nums2 = [9,4,9,8,4]))