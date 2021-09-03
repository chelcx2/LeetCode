def lengthOfLastWord(s: str) -> int:
    return len(s.split()[-1]) if s.split() else 0

print(lengthOfLastWord(s = "Hello World"))
print(lengthOfLastWord(s = "   fly me   to   the moon  "))
print(lengthOfLastWord(s = "luffy is still joyboy"))