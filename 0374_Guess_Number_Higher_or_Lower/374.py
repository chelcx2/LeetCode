# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        start = 1
        stop = n
        while True:
            
            num = (start + stop) // 2
            result = guess(num)
            if result == 0:
                return num
            if stop - start == 1:
                return stop
            if result == -1:
                stop = num
            else:
                start = num