def reverseWords(s: str) -> str:
    return ' '.join(s.split()[::-1])

print(reverseWords(s = "the sky is blue"))
print(reverseWords(s = "  hello world  "))
print(reverseWords(s = "a good   example"))
print(reverseWords(s = "  Bob    Loves  Alice   "))
print(reverseWords(s = "Alice does not even like bob"))