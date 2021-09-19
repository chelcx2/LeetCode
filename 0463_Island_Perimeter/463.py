class Solution(object):
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        p = 0
        for r in range(len(grid)):
            for c in range(len(grid[0])):
                # print(f'r = {r}, c = {c}')
                if grid[r][c] == 1:
                    around = 4
                    try:
                        up = grid[r - 1][c]
                        assert r - 1 >= 0
                        if up == 1:
                            # print('up ', end='')
                            around -= 1
                    except:
                        pass

                    try:
                        down = grid[r + 1][c]
                        assert r + 1 <= len(grid)
                        if down == 1:
                            # print('down ', end='')
                            around -= 1
                    except:
                        pass

                    try:
                        left = grid[r][c - 1]
                        assert c - 1 >= 0
                        if left == 1:
                            # print('left ', end='')
                            around -= 1
                    except:
                        pass

                    try:
                        right = grid[r][c + 1]
                        assert c + 1 <= len(grid[0])
                        if right == 1:
                            # print('right ', end='')
                            around -= 1
                    except:
                        pass

                    # print(f'around = {around}')
                    p += around
        return p

a = Solution()
print(a.islandPerimeter(grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]))
print(a.islandPerimeter(grid = [[1]]))
print(a.islandPerimeter(grid = [[1,0]]))