#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isUgly(int n)
{
    if (n == 0)
        return false;
    while (n % 2 == 0)
        n /= 2;
    while (n % 3 == 0)
        n /= 3;
    while (n % 5 == 0)
        n /= 5;
    return n == 1;
}
int main()
{
    printf("%d %d %d %d\n", isUgly(6), isUgly(8), isUgly(14), isUgly(1));
    return 0;
}