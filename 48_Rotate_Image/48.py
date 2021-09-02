def rotate(matrix) -> None:
    """
    Do not return anything, modify matrix in-place instead.
    """
    matrix.reverse()
    L = zip(*matrix)
    matrix.clear()
    for t in L:
        matrix.append(list(t))
    # print(matrix)

if __name__ == '__main__':
    rotate(matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]])
    