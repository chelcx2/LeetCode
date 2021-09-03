def searchMatrix(matrix, target):
    for sublist in matrix:
        if sublist and target > sublist[-1]:
            continue
        if target in sublist:
            return True
    return False
print(searchMatrix(matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3))
print(searchMatrix(matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13))