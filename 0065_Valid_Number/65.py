def is_decimal(s: str) -> bool:
    try:
        num = [str(i) for i in range(10)]
        assert s[0] in num + ['+', '-', '.']
        assert s.count('.') == 1
        if s[0] in ['+', '-']:
            s = s[1:]
        L = s.split('.')
        assert any(L)
        if L[0]:
            for ch in L[0]:
                assert ch in num
        if L[1]:
            for ch in L[1]:
                assert ch in num
        return True

    except:
        return False

def is_integer(s: str) -> bool:
    num = [str(i) for i in range(10)]
    if s[0] in ['+', '-']:
        assert s[1:]
        s = s[1:]
    for ch in s:
        if ch not in num:
            return False
    return True

class Solution:
    def isNumber(self, s: str) -> bool:
        try:
            assert s.count('e') + s.count('E') <= 1
            if 'e' in s:
                L = s.split('e')
                assert len(L) == 2 and all(L)
                # print(is_decimal(L[0]), is_integer(L[0]), is_integer(L[1]))
                return (is_decimal(L[0]) or is_integer(L[0])) and is_integer(L[1])
            elif 'E' in s:
                L = s.split('E')
                assert len(L) == 2 and all(L)
                return (is_decimal(L[0]) or is_integer(L[0])) and is_integer(L[1])
            else:
                # print(is_decimal(s), is_integer(s))
                return is_decimal(s) or is_integer(s)

        except:
            return False

a = Solution()
print(a.isNumber(s = "0"))
print(a.isNumber(s = "e"))
print(a.isNumber(s = "."))
print(a.isNumber(s = "-123.456e789"))
print(a.isNumber(s = "4e+"))