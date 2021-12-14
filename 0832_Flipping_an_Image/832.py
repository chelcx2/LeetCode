class Solution:
    def flipAndInvertImage(self, image: list[list[int]]) -> list[list[int]]:
        ans = []
        for row in image:
            tmp = []
            for pix in row[::-1]:
                if pix == 1:
                    tmp.append(0)
                else:
                    tmp.append(1)
            ans.append(tmp)
        return ans

a = Solution()
print(a.flipAndInvertImage(image = [[1,1,0],[1,0,1],[0,0,0]]))
print(a.flipAndInvertImage(image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]))