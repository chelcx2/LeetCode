class Solution:
    def topKFrequent(self, nums, k):
        d = {}
        ans = []
        for i in nums:
            if i in d.keys():
                d[i] += 1
            else:
                d[i] = 1
        # print(d)
        L = list(d.items())
        # print(L)
        L.sort(key = lambda tup: tup[1], reverse = True)
        for i in range(k):
            ans.append(L[i][0])
        return ans

a = Solution()
print(a.topKFrequent(nums = [1,1,1,2,2,3], k = 2))
print(a.topKFrequent(nums = [1], k = 1))