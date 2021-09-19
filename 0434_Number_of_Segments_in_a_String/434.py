class Solution:
    def countSegments(self, s: str) -> int:
        return len([ch for ch in s.split(' ') if ch])
a = Solution()
print(a.countSegments(s = "Hello, my name is John"))
print(a.countSegments(s = "Hello"))
print(a.countSegments(s = "love live! mu'sic forever"))