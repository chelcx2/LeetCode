def encrypt(mapping: list[int], info: tuple[int]) -> tuple[int]:
    result = ''
    for d in str(info[1]):
        result += str(mapping[int(d)])
    return info + (int(result), )

class Solution:
    def sortJumbled(self, mapping: list[int], nums: list[int]) -> list[int]:
        L = []
        for item in enumerate(nums):
            L.append(encrypt(mapping = mapping, info = item))
        L.sort(key = lambda info: (info[2], info[0]))
        return [info[1] for info in L]

a = Solution()
print(a.sortJumbled(mapping = [8,9,4,0,2,1,3,5,7,6], nums = [991,338,38]))
print(a.sortJumbled(mapping = [0,1,2,3,4,5,6,7,8,9], nums = [789,456,123]))
        