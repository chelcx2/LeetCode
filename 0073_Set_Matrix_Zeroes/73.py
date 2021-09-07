class Solution:
    def setZeroes(self, matrix: list[list[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        zeros = []
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    print(i, j)
                    zeros.append((i, j))
                    
        print(zeros)
        for m, n in zeros:
            for i in range(len(matrix)):
                matrix[i][n] = 0
            for j in range(len(matrix[0])):
                matrix[m][j] = 0

        print(matrix)
a = Solution()
a.setZeroes(matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]])
        