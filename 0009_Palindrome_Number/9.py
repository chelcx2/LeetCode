def isPalindrome(x: int) -> bool:
    s = str(x)
    if s == s[::-1]:
        return True
    return False

print(isPalindrome(x = 121))
print(isPalindrome(x = -121))
print(isPalindrome(x = 10))
print(isPalindrome(x = -101))