class Solution:
    def matrixReshape(self, mat: list[list[int]], r: int, c: int) -> list[list[int]]:
        if r * c != len(mat) * len(mat[0]):
            return mat
        ans = []
        for _ in range(r):
            temp = []
            for _ in range(c):
                temp.append(0)
            ans.append(temp)
        # print(temp)
        row, col = 0, 0
        for line in mat:
            for element in line:
                ans[row][col] = element
                if col == c - 1:
                    row += 1
                    col = 0
                else:
                    col += 1
        return ans

a = Solution()
print(a.matrixReshape(mat = [[1,2],[3,4]], r = 1, c = 4))
print(a.matrixReshape(mat = [[1,2],[3,4]], r = 2, c = 4))