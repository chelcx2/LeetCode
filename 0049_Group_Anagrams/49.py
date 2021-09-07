class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        ans = {}
        for s in strs:
            temp = ''.join(sorted(s))
            if temp not in ans.keys():
                ans[temp] = [s]
            else:
                ans[temp].append(s)
        # print(ans)
        return list(ans.values())

a = Solution()
print(a.groupAnagrams(strs = ["eat","tea","tan","ate","nat","bat"]))