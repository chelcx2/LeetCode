class Solution:
    def numSpecialEquivGroups(self, words: list[str]) -> int:
        s = set()
        for w in words:
            even = ''
            odd = ''
            for i in range(len(w)):
                if i % 2 == 0:
                    even += w[i]
                else:
                    odd += w[i]
            tmp = (tuple(sorted(even)), tuple(sorted(odd)))
            # print(tmp)
            if tmp not in s:
                s.add(tmp)
        print(s)
        return len(s)

a = Solution()
print(a.numSpecialEquivGroups(words = ["abcd","cdab","cbad","xyzz","zzxy","zzyx"]))