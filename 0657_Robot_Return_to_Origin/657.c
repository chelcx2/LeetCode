#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool judgeCircle(char *moves)
{
    int idx = 0;
    int u = 0, d = 0, l = 0, r = 0;
    while (moves[idx] != '\0')
    {
        switch (moves[idx])
        {
        case 'U':
            u++;
            break;
        case 'D':
            d++;
            break;
        case 'L':
            l++;
            break;
        case 'R':
            r++;
            break;
        default:
            u++;
            break;
        }
        idx++;
    }
    return u == d && l == r;
}

int main()
{
    char *s1 = "UD", *s2 = "LL", *s3 = "RRDD", *s4 = "LDRRLRUULR";
    printf("%d %d %d %d\n", judgeCircle(s1), judgeCircle(s2), judgeCircle(s3), judgeCircle(s4));
    return 0;
}