class Solution:
    def hammingWeight(self, n: int) -> int:
        return bin(n).count('1')
a = Solution()
print(a.hammingWeight(n = 0b00000000000000000000000000001011))
print(a.hammingWeight(n = 0b00000000000000000000000010000000))
print(a.hammingWeight(n = 0b11111111111111111111111111111101))