class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        num_of_vowel1 , num_of_vowel2 = 0, 0
        vowels = ['a', 'e', 'i', 'o', 'u']
        s = s.lower()
        for vowel in vowels:
            num_of_vowel1 += s[:len(s) // 2].count(vowel)
            num_of_vowel2 += s[len(s) // 2:].count(vowel)            
        return num_of_vowel1 == num_of_vowel2

a = Solution()
print(a.halvesAreAlike(s = "book"))
print(a.halvesAreAlike(s = "textbook"))