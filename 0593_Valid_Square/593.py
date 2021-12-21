def dis_square(p: list[int], q: list[int]):
    return (p[0] - q[0]) ** 2 + (p[1] - q[1]) ** 2

class Solution:
    def validSquare(self, p1: list[int], p2: list[int], p3: list[int], p4: list[int]) -> bool:
        dis = [dis_square(p1, p2), dis_square(p1, p3), dis_square(p1, p4), dis_square(p2, p3), dis_square(p2, p4), dis_square(p3, p4)]
        return max(dis) == 2 * min(dis) and len(set(dis)) == 2

a = Solution()
print(a.validSquare(p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,1]))
print(a.validSquare(p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,12]))
print(a.validSquare(p1 = [1,0], p2 = [-1,0], p3 = [0,1], p4 = [0,-1]))