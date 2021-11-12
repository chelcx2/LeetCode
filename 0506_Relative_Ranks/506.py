class Solution(object):
    def findRelativeRanks(self, score):
        """
        :type score: List[int]
        :rtype: List[str]
        """
        score_s = sorted(score, reverse=True)
        ans = []
        for s in score:
            i = score_s.index(s)
            if i == 0:
                ans.append('Gold Medal')
            elif i == 1:
                ans.append('Silver Medal')
            elif i == 2:
                ans.append('Bronze Medal')
            else:
                ans.append(str(i + 1))
        return ans
a = Solution()
print(a.findRelativeRanks(score = [5,4,3,2,1]))
print(a.findRelativeRanks(score = [10,3,8,9,4]))