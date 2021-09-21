class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not all(strs):
            return ''
        idx = 0
        while True:
            # print(idx)
            try:
                if len(set(s[idx] for s in strs)) != 1:
                    break
            except: 
                break
            idx += 1
        return strs[0][:idx]
a = Solution()
print(a.longestCommonPrefix(strs = ["flower","flow","flight"]))
print(a.longestCommonPrefix(strs = ["dog","racecar","car"]))
print(a.longestCommonPrefix(strs = ["a"]))
