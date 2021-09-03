def strStr(haystack: str, needle: str) -> int:
    return haystack.find(needle)

print(strStr(haystack = "hello", needle = "ll"))
print(strStr(haystack = "aaaaa", needle = "bba"))
print(strStr(haystack = "", needle = ""))
