class Solution:
    def intToRoman(self, num: int) -> str:
        single_val = {1: 'I', 5: 'V', 10: 'X', 50: 'L', 100: 'C', 500: 'D', 1000: 'M'}
        special_val = {4: 'IV', 9: 'IX', 40: 'XL', 90: 'XC', 400: 'CD', 900: 'CM'}
        ans = ''
        pos = 1
        for d in str(num)[::-1]:
            d = int(d)
            if d == 0:
                pos *= 10
                continue
            val = d * pos
            # print(val)
            if val in single_val.keys():
                ans = single_val[val] + ans
            elif val in special_val.keys():
                ans = special_val[val] + ans
            else:
                if d in [1, 2, 3]:
                    ans = single_val[pos] * d + ans
                elif d in [6, 7, 8]:
                    ans = single_val[5 * pos] + single_val[pos] * (d - 5) + ans
                    
            pos *= 10
        return ans
                
a = Solution()
print(a.intToRoman(num = 3))
print(a.intToRoman(num = 4))
print(a.intToRoman(num = 9))
print(a.intToRoman(num = 58))
print(a.intToRoman(num = 1994))
