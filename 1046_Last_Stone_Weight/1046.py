class Solution:
    def lastStoneWeight(self, stones: list[int]) -> int:
        while len(stones) > 1:
            stones.sort(reverse=True)
            if stones[0] == stones[1] and len(stones) > 2:
                stones = stones[2:]
            elif stones[0] == stones[1] and len(stones) <= 2:
                return 0
            elif stones[0] != stones[1] and len(stones) > 2:
                stones = stones[2:] + [stones[0] - stones[1]]
            else:
                return stones[0] - stones[1]
        return stones[0]

a = Solution()
print(a.lastStoneWeight(stones = [2,7,4,1,8,1]))