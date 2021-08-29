def romanToInt(s):
    single_val = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    special_val = {'IV': 4, 'IX': 9, 'XL': 40, 'XC': 90, 'CD': 400, 'CM': 900}
    idx = 0
    val = 0
    while True:
        # print(f'idx = {idx}')
        if idx == len(s) - 1:
            # last char of s, no need to compare special case
            val += single_val[s[idx]]
            # break
            idx += 1
        else:
            # not the last char, consider special case
            temp = s[idx] + s[idx + 1]
            if temp in special_val.keys():
                val += special_val[temp]
                idx += 2
            else:
                val += single_val[s[idx]]
                idx += 1
        
        # print(f'val = {val}')
        if idx == len(s):
            break
    return val



if __name__ == '__main__':    
    print(romanToInt('LVIII'))