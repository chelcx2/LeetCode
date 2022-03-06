class Solution:
    def checkValid(self, matrix: list[list[int]]) -> bool:
        try:
            for row in matrix:
                assert sorted(row) == list(range(1, len(matrix) + 1))
            for col in list(zip(*matrix)):
                assert sorted(col) == list(range(1, len(matrix) + 1))
            return True
        except:
            return False

a = Solution()
print(a.checkValid(matrix = [[1,2,3],[3,1,2],[2,3,1]]))
print(a.checkValid(matrix = [[1,1,1],[1,2,3],[1,2,3]]))