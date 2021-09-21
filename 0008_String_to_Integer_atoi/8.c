// All Accepted
// but this problem sucks
// too many trivial constraints
// which wastes me lots of time
// UNrecommended!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int myAtoi(char *s)
{
    char positive = 'U';
    int digits[200];
    long long int idx = 0, ans = 0, base = 1;
    bool start = false, leading_zero = true;

    for (int i = 0; i < 200; i++)
        digits[i] = -1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != '0' && s[i] != ' ')
        {
            if (i != 0)
                leading_zero = false;
            else if (s[i] >= (int)'1' && s[i] <= (int)'9')
                leading_zero = false;
        }
        if (s[i] == '0' && leading_zero)
        {
            start = true;
            continue;
        }
        if (s[i] == ' ')
        {
            if (!start)
                continue;
            else
                break;
        }
        if (s[i] == '-' || s[i] == '+')
        {
            if (start)
            {
                return 0;
            }
            if (positive == 'U')
            {
                start = true;
                positive = s[i] == '-' ? 'N' : 'P';
                continue;
            }
        }
        if (s[i] > (int)'9' || s[i] < (int)'0')
            break;
        start = true;
        digits[idx] = s[i] - '0';
        idx++;
    }

    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        // printf("%d ", digits[i]);
        if (digits[i] == -1)
            continue;
        if (i > 9)
            return positive != 'N' ? 2147483647 : -2147483648;

        ans += digits[i] * base;
        if (ans > 2147483647)
            return positive != 'N' ? 2147483647 : -2147483648;
        base *= 10;
    }
    ans = positive == 'N' ? -ans : ans;
    // printf("%d\n", ans);

    return ans;
}

int main()
{
    char str1[] = "42";
    char str2[] = "   -42";
    char str3[] = "4193 with words";
    char str4[] = "words and 987";
    char str5[] = "-91283472332";
    char str6[] = "20000000000000000000";
    // printf("%d\n", myAtoi(str1));
    // printf("%d\n", myAtoi(str2));
    // printf("%d\n", myAtoi(str3));
    // printf("%d\n", myAtoi(str4));
    // printf("%d\n", myAtoi(str5));
    printf("\n%d\n", myAtoi(str6));
    return 0;
}