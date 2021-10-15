def isValidSudoku(board):
    # print(board)
    # print(list(map(list, zip(*board))))
    nums = [str(i) for i in range(1, 10)]
    # print(nums)
    boardT = list(map(list, zip(*board)))
    center = [(1, 1), (1, 4), (1, 7), (4, 1), (4, 4), (4, 7), (7, 1), (7, 4), (7, 7)]
    for row in board:
        for num in nums:
            if row.count(num) > 1:
                return False
    for row in boardT:
        for num in nums:
            if row.count(num) > 1:
                return False
    
    for r, c in center:
        sub_block = [board[r-1][c-1], board[r-1][c], board[r-1][c+1], \
                     board[r][c-1], board[r][c], board[r][c+1], \
                     board[r+1][c-1], board[r+1][c], board[r+1][c+1]]
        for num in nums:
            if sub_block.count(num) > 1:
                return False
    return True


if __name__ == '__main__':
    s = [[".",".",".",".","5",".",".","1","."],
        [".","4",".","3",".",".",".",".","."],
        [".",".",".",".",".","3",".",".","1"],
        ["8",".",".",".",".",".",".","2","."],
        [".",".","2",".","7",".",".",".","."],
        [".","1","5",".",".",".",".",".","."],
        [".",".",".",".",".","2",".",".","."],
        [".","2",".","9",".",".",".",".","."],
        [".",".","4",".",".",".",".",".","."]]
    print(isValidSudoku(s))