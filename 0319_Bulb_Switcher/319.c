#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bulbSwitch(int n)
{
    // int *bulb;
    // int on = 0;
    // bulb = malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    //     bulb[i] = 0;

    // for (int round = 1; round <= n; round++)
    // {
    //     int idx = round - 1;
    //     while (idx < n)
    //     {
    //         if (bulb[idx] == 1)
    //         {
    //             on--;
    //             bulb[idx] = 0;
    //         }
    //         else
    //         {
    //             on++;
    //             bulb[idx] = 1;
    //         }
    //         idx += round;
    //     }
    //     for (int i = 0; i < n; i++)
    //         printf("%d ", bulb[i]);
    //     printf("\n");
    // }

    // free(bulb);
    // return on;
    return (int)sqrt(n);
}

int main()
{
    printf("%d\n", bulbSwitch(10));
    return 0;
}