def addBinary(a: str, b: str) -> str:
    return bin(int(a, base = 2) + int(b, base = 2))[2:]

print(addBinary(a = "11", b = "1"))
print(addBinary(a = "1010", b = "1011"))