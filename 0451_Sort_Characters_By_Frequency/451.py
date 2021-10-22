class Solution:
    def frequencySort(self, s: str) -> str:
        # #################
        # TLE Solution

        # L = list(s)
        # L.sort(key = lambda ch: (s.count(ch), ch), reverse = True)
        # return ''.join(L)

        # ##################
        ss = set(s)
        L = []
        ans = ''
        for ch in ss:
            L.append((ch, s.count(ch)))
        L.sort(key = lambda t: (t[1], t[0]), reverse = True)
        for t in L:
            ans += t[0] * t[1]
        return ans

a = Solution()
print(a.frequencySort(s = "tree"))
print(a.frequencySort(s = "cccaaa"))
print(a.frequencySort(s = "Aabb"))