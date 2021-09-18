class Solution:
    def gameOfLife(self, board: list[list[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        next_state = []
        for i in range(len(board)):
            temp = []
            for j in range(len(board[0])):
                cnt = 0
                try:
                    assert i - 1 >= 0 and j - 1 >= 0
                    if board[i-1][j-1] == 1:
                        cnt += 1
                        # print(f'UL {cnt}, ', end='')
                except:
                    pass
                try:
                    assert j - 1 >= 0
                    if board[i][j-1] == 1:
                        cnt += 1
                        # print(f'L {cnt}, ', end='')
                except:
                    pass
                try:
                    assert j - 1 >= 0
                    if board[i+1][j-1] == 1:
                        cnt += 1
                        # print(f'BL {cnt}, ', end='')
                except:
                    pass
                try:
                    assert i - 1 >= 0
                    if board[i-1][j] == 1:
                        cnt += 1
                        # print(f'U {cnt}, ', end='')
                except:
                    pass
                try:
                    if board[i+1][j] == 1:
                        cnt += 1
                        # print(f'B {cnt}, ', end='')
                except:
                    pass
                try:
                    assert i - 1 >= 0
                    if board[i-1][j+1] == 1:
                        cnt += 1
                        # print(f'UR {cnt}, ', end='')
                except:
                    pass
                try:
                    if board[i][j+1] == 1:
                        cnt += 1
                        # print(f'R {cnt}, ', end='')
                except:
                    pass
                try:
                    if board[i+1][j+1] == 1:
                        cnt += 1
                        # print(f'BR {cnt}, ', end = '')
                except:
                    pass
                # print(f'\nr={i}, c={j}, live = {cnt}')
                if board[i][j] == 0:
                    if cnt == 3:
                        temp.append(1)
                    else:
                        temp.append(0)
                else:
                    if cnt < 2 or cnt > 3:
                        temp.append(0)
                    else:
                        temp.append(1)
            next_state.append(temp)
        board=next_state
        
        print(board)
a = Solution()
a.gameOfLife(board = [[0,1,0],[0,0,1],[1,1,1],[0,0,0]])
a.gameOfLife(board = [[1,1],[1,0]])
