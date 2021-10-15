def convert(s):
    if s == 1:
        return '1'
    prev = str(s)[0]
    i = 0
    ans = ''
    for ch in str(s):
        if ch == prev:
            i = i + 1
        else:
            ans += f'{i}{prev}'
            prev = ch
            i = 1 
    ans += f'{i}{prev}'
    return ans


class Solution:
    def countAndSay(self, n: int) -> str:
        if n == 1:
            return '1'
        result = 1
        for _ in range(n):
            result = convert(result)
            # print(result)
        return result

a = Solution()
print(a.countAndSay(n = 4))
        