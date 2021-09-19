class Solution:
    def numberToWords(self, num: int) -> str:
        if num == 0:
            return 'Zero'
        str_num = str(num)
        # for i in range(len(str_num) // 3 + 1):
        idx = 0
        base = ['', 'Thousand', 'Million', 'Billion', 'Trillion']
        name_1 = {'0': 'Zero', '1': 'One', '2': 'Two', '3': 'Three', '4': 'Four', \
                '5': 'Five', '6': 'Six', '7': 'Seven', '8': 'Eight', '9': 'Nine'}
        name_10 = {'0': 'Zero', '1': 'Ten', '2': 'Twenty', '3': 'Thirty', '4': 'Forty', \
                '5': 'Fifty', '6': 'Sixty', '7': 'Seventy', '8': 'Eighty', '9': 'Ninety'}
        name_special = {'10': 'Ten', '11': 'Eleven', '12': 'Twelve', '13': 'Thirteen', '14': 'Fourteen', '15': 'Fifteen', '16': 'Sixteen', '17': 'Seventeen', '18': 'Eighteen', '19': 'Nineteen'}
        temp_ans = []
        while True:
            temp2 = []
            try:
                assert len(str_num) > 3
                sub_num = str_num[-3:]
                # print(sub_num, idx)
                if sub_num == '000':
                    pass
                else:
                    if sub_num[0] != '0':
                        temp2.extend([name_1[sub_num[0]], 'Hundred'])
                    if sub_num[1] not in {'0', '1'}:
                        temp2.append(name_10[sub_num[1]])
                        if sub_num[2] != '0':
                            temp2.append(name_1[sub_num[2]])
                    if sub_num[1] == '1':
                        temp2.append(name_special[sub_num[1] + sub_num[2]])
                    if sub_num[1] == '0' and sub_num[2] != '0':
                        temp2.append(name_1[sub_num[2]])
                    temp2.append(base[idx])
                    temp_ans = temp2 + temp_ans
                str_num = str_num[:-3]
                idx += 1
            except:
                sub_num = str_num
                # print(sub_num, idx)

                if len(sub_num) == 3:
                    if sub_num == '000':
                        pass
                    else:
                        if sub_num[0] != '0':
                            temp2.extend([name_1[sub_num[0]], 'Hundred'])
                        if sub_num[1] not in {'0', '1'}:
                            temp2.append(name_10[sub_num[1]])
                            if sub_num[2] != '0':
                                temp2.append(name_1[sub_num[2]])
                        if sub_num[1] == '1':
                            temp2.append(name_special[sub_num[1] + sub_num[2]])
                        if sub_num[1] == '0' and sub_num[2] != '0':
                            temp2.append(name_1[sub_num[2]])
                        temp2.append(base[idx])
                elif len(sub_num) == 2:
                    if sub_num[0] not in {'0', '1'}:
                        temp2.append(name_10[sub_num[0]])
                        if sub_num[1] != '0':
                            temp2.append(name_1[sub_num[1]])
                    if sub_num[0] == '1':
                        temp2.append(name_special[sub_num[0] + sub_num[1]])
                    temp2.append(base[idx])
                elif len(sub_num) == 1:
                    if sub_num[0] != '0':
                        temp2.append(name_1[sub_num[0]])
                    temp2.append(base[idx])
                temp_ans = temp2 + temp_ans
                break
        return ' '.join(temp_ans[:-1]) if temp_ans[-1] == '' else ' '.join(temp_ans)

a = Solution()
print(a.numberToWords(num = 123))
print(a.numberToWords(num = 12345))
print(a.numberToWords(num = 1234567))
print(a.numberToWords(num = 1234567891))
print(a.numberToWords(num = 1000000))