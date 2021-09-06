class Solution:
    def reverseString(self, s: list[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        # s.reverse()
        s[:] = s[::-1]
        # print(s)
a = Solution()
a.reverseString(s = ["h","e","l","l","o"])
a.reverseString(s = ["H","a","n","n","a","h"])