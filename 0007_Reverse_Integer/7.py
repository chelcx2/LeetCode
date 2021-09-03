def reverse(x: int) -> int:
    s = str(x)
    neg = False
    if s[0] == '-':
        s = s[1:]
        neg = True
    res = int(''.join(reversed(s)))
    if res not in range(-2 ** 31, 2 ** 31) or x not in range(-2 ** 31, 2 ** 31):
        return 0
    if neg:
        return -res
    return res

print(reverse(x = 123))
print(reverse(x = -123))
print(reverse(x = 120))
print(reverse(x = 0))