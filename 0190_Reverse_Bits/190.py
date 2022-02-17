class Solution:
    def reverseBits(self, n: int) -> int:
        return int(bin(n)[2:].zfill(32)[::-1], 2)

a = Solution()
print(a.reverseBits(0b00000010100101000001111010011100))