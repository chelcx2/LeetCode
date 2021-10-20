#include <stdio.h>
#include <stdlib.h>

int finalValueAfterOperations(char **operations, int operationsSize)
{
    int ans = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        if (operations[i][0] == '+' || operations[i][2] == '+')
            ans++;
        else
            ans--;
    }
    return ans;
}
