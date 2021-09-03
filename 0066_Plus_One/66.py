def plusOne(digits):
    return [int(i) for i in str(int(''.join([str(d) for d in digits])) + 1)]

print(plusOne(digits = [1,2,3]))
print(plusOne(digits = [4,3,2,1]))
print(plusOne(digits = [0]))
print(plusOne(digits = [9]))