#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int k = 0;
    *returnSize = 2;
    int *returnSize2 = malloc(sizeof(int) * 2);
    if (returnSize2 == NULL)
        return NULL;
    while (i < numsSize){
        k = i+1;
        while (k < numsSize){
            if (nums[i] + nums[k] == target){
                returnSize2[0] = i;
                returnSize2[1] = k;
                return (returnSize2);
            }
            k++;
        }
        i++;
    }
    return (returnSize2);
}

int main(int argc, char *argv[]){
    int nums[] = {2,7,11,15};
    int target = 9;
    int numsSize = 4;
    int returnSize[4];
    int *returnSize2 = twoSum(nums, numsSize, target, returnSize);

    twoSum(nums, numsSize, target, returnSize);
    printf("%d, %d\n", returnSize2[0], returnSize2[1]);
    return (0);
}