#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPerfectSquare(long long int num)
{
    long long int i = 1;
    while (i * i <= num)
    {
        if (i * i == num)
            return true;
        else if (i * i > num)
            return false;
        i++;
    }
    return false;
}

int main()
{
    printf("%d %d\n", isPerfectSquare(16), isPerfectSquare(14));
    return 0;
}