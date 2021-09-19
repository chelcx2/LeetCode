# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer

BAD = 4     # we don't know this answer at all
def isBadVersion(version):
    # just for test, 
    # this API has already been implemented by LeetCode
    if version >= BAD:
        return True
    else:
        return False

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        # for ver in range(1, n + 1):
        #     if isBadVersion(ver):
        #         return ver
        # which will expectedly cause TLE
        start = 1
        stop = n
        while True:
            ver = (stop + start) // 2
            # print(start, stop, ver)
            if isBadVersion(ver) and not isBadVersion(ver - 1):
                return ver
            if stop - start == 1:
                return stop

            # binary division
            if isBadVersion(ver):
                stop = ver
            else:
                start = ver

a = Solution()
print(a.firstBadVersion(n = 5))