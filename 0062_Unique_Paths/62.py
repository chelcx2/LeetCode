def fac(i: int) -> int:
    if i <= 1:
        return 1
    else:
        return i * fac(i-1)

class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        # return fac(m + n - 2) // (fac(m - 1) * fac(n - 1))
        temp = 1
        total = m + n - 2
        larger = m - 1 if m > n else n - 1
        smaller = n - 1 if larger == m - 1 else m - 1
        # print(total, larger, smaller)
        for i in range(larger + 1, total + 1):
            temp *= i
            # print(f'i = {i}, temp = {temp}')
        # print(f'fac smaller = {fac(smaller)}')
        temp //= fac(smaller)
        return temp 

a = Solution()
print(a.uniquePaths(m = 3, n = 7))
print(a.uniquePaths(m = 3, n = 2))