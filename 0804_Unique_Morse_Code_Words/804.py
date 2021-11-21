class Solution:
    def uniqueMorseRepresentations(self, words: list[str]) -> int:
        table = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", \
                 "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", \
                 "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", \
                 "-.--","--.."]
        diff = set()
        for w in words:
            morse = ''
            for ch in w:
                morse += table[ord(ch) - ord('a')]
            diff.add(morse)
        return len(diff)
        
a = Solution()
print(a.uniqueMorseRepresentations(words = ["gin","zen","gig","msg"]))
print(a.uniqueMorseRepresentations(words = ["a"]))