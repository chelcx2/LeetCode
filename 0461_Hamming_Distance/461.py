class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        dis = 0
        xbin = list(bin(x)[2:])
        ybin = list(bin(y)[2:])
        if len(xbin) > len(ybin):
            for i in range(len(xbin) - len(ybin)):
                ybin.insert(0, '0')
        if len(xbin) < len(ybin):
            for i in range(len(ybin) - len(xbin)):
                xbin.insert(0, '0')
        # print(xbin)
        # print(ybin)
        for i in range(len(xbin)):
            if xbin[i] != ybin[i]:
                dis += 1
        return dis
a = Solution()
print(a.hammingDistance(x = 1, y = 4))
print(a.hammingDistance(x = 3, y = 1))