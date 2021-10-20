class Solution:
    def findLucky(self, arr: list[int]) -> int:
        lucky = []
        s = set(arr)
        for i in s:
            if arr.count(i) == i and i <= len(arr):
                lucky.append(i)
        return max(lucky) if lucky else -1