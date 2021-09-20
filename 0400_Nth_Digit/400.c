#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////
// Beginning of implementation on func "atoi"
// fucking LeetCode does not accept "atoi", so I copied a version online.
void swap(char *x, char *y)
{
    char t = *x;
    *x = *y;
    *y = t;
}

// Function to reverse `buffer[i…j]`
char *reverse(char *buffer, int i, int j)
{
    while (i < j)
    {
        swap(&buffer[i++], &buffer[j--]);
    }

    return buffer;
}

// Iterative function to implement `itoa()` function in C
char *itoa(int value, char *buffer, int base)
{
    // invalid input
    if (base < 2 || base > 32)
    {
        return buffer;
    }

    // consider the absolute value of the number
    int n = abs(value);

    int i = 0;
    while (n)
    {
        int r = n % base;

        if (r >= 10)
        {
            buffer[i++] = 65 + (r - 10);
        }
        else
        {
            buffer[i++] = 48 + r;
        }

        n = n / base;
    }

    // if the number is 0
    if (i == 0)
    {
        buffer[i++] = '0';
    }

    // If the base is 10 and the value is negative, the resulting string
    // is preceded with a minus sign (-)
    // With any other base, value is always considered unsigned
    if (value < 0 && base == 10)
    {
        buffer[i++] = '-';
    }

    buffer[i] = '\0'; // null terminate string

    // reverse the string and return it
    return reverse(buffer, 0, i - 1);
}
// End of implementation on func "atoi"
//////////////////////////////////////////////////////////

int findNthDigit(int n)
{
    int num_of_int_in_single_group = 9, group = 1, left = n - 9, prev_left = n;
    int first_elem_in_group_k = 1, num_idx, digit_idx;
    char str[20];
    int ans;
    // printf("initial group = %d, left = %d\n", group, left);
    while (left > 0)
    {
        num_of_int_in_single_group *= 10;
        group++;
        prev_left = left;
        left -= num_of_int_in_single_group * group;
    }
    for (int _ = 1; _ < group; _++)
        first_elem_in_group_k *= 10;
    left = prev_left;
    if (left % group == 0)
    {
        num_idx = (int)left / group - 1;
        digit_idx = group - 1;
    }
    else
    {
        num_idx = (int)left / group;
        digit_idx = (left % group) - 1;
    }
    // printf("%d is in group %d, the digit left in that group(first=%d) is %d, num_idx = %d, digit_idx = %d, num = %d\n", n, group, first_elem_in_group_k, prev_left, num_idx, digit_idx, first_elem_in_group_k + num_idx);
    itoa(first_elem_in_group_k + num_idx, str, 10);
    // printf("%s\n", str);
    // ans = atoi(str[digit_idx]);
    ans = str[digit_idx] - '0';
    return ans;
}

int main()
{
    printf("%d\n", findNthDigit(10017));
    printf("%d\n", findNthDigit(3));
    printf("%d\n", findNthDigit(11));
    return 0;
}