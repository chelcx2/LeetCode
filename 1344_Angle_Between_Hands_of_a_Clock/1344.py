class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        if hour == 12:
            hour = 0
        
        angle = abs(30 * hour - 5.5 * minutes)
        return angle if angle <= 180.0 else 360.0 - angle
a = Solution()
print(a.angleClock(hour = 12, minutes = 30))
print(a.angleClock(hour = 3, minutes = 30))
print(a.angleClock(hour = 3, minutes = 15))
print(a.angleClock(hour = 4, minutes = 50))
print(a.angleClock(hour = 12, minutes = 0))