class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        merge = sorted(nums1 + nums2)
        # print(merge)
        if len(merge) % 2 == 1:
            return merge[(len(merge) - 1) // 2]
        else:
            return (merge[len(merge) // 2] + merge[len(merge) // 2 - 1]) / 2

a = Solution()
print(a.findMedianSortedArrays(nums1 = [1,3], nums2 = [2]))
print(a.findMedianSortedArrays(nums1 = [1,2], nums2 = [3,4]))