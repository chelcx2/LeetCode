#include <stdio.h>
#include <stdlib.h>

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int cons = 0, cons_M = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            cons++;
            cons_M = i == numsSize - 1 && cons > cons_M ? cons : cons_M;
        }
        else
        {
            if (cons > cons_M)
                cons_M = cons;
            cons = 0;
        }
    }
    return cons_M;
}

int main()
{
    int nums1[6] = {1, 1, 0, 1, 1, 1};
    int nums2[6] = {1, 0, 1, 1, 0, 1};
    printf("%d %d\n", findMaxConsecutiveOnes(nums1, 6), findMaxConsecutiveOnes(nums2, 6));
    return 0;
}