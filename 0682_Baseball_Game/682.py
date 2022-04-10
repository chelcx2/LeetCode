class Solution:
    def calPoints(self, ops: list[str]) -> int:
        score = []
        for i in ops:
            if i == '+':
                score.append(sum(score[-2:]))
            elif i == 'C':
                score.pop()
            elif i == 'D':
                score.append(2 * score[-1])
            else:
                score.append(int(i))
        return sum(score)

a = Solution()
print(a.calPoints(ops = ["5","2","C","D","+"]))
