class Solution:
    def addDigits(self, num: int) -> int:
        while True:
            s = sum([int(d) for d in str(num)])
            if len(str(s)) < 2:
                return s
            num = s