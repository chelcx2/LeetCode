class Solution:
    def toGoatLatin(self, s: str) -> str:
        L = s.split()
        n = 1
        ans = []
        for word in L:
            if word[0].lower() in {'a', 'e', 'i', 'o', 'u'}:
                word += 'ma'
                word += 'a' * n
                ans.append(word)
            else:
                word = word[1:] + word[0]
                word += 'ma'
                word += 'a' * n
                ans.append(word)

            n += 1
        return ' '.join(ans)
