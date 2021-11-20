class Solution:
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        return False if s.count('A') >= 2 or 'LLL' in s else True
a = Solution()
print(a.checkRecord(s = "PPALLP"))
print(a.checkRecord(s = "PPALLL"))