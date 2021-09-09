class Solution:
    def isHappy(self, n: int) -> bool:
        appear = [n]
        while n != 1:
            digits = list(map(int, str(n)))
            n = sum([i * i for i in digits])
            if n in appear:
                return False
            appear.append(n)
        return True

a = Solution()
print(a.isHappy(n = 19))
print(a.isHappy(n = 2))