class Solution:
    def maxWidthOfVerticalArea(self, points: list[list[int]]) -> int:
        L = sorted(set([p[0] for p in points]))
        # print(L)
        ans = 0
        for i in range(1, len(L)):
            if L[i] - L[i - 1] > ans:
                ans = L[i] - L[i - 1]
        return ans

a = Solution()
print(a.maxWidthOfVerticalArea(points = [[8,7],[9,9],[7,4],[9,7]]))
print(a.maxWidthOfVerticalArea(points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]))
            