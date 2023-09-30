/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *indx;
    int *i;

    indx = malloc(*returnSize * sizeof(int));
    i = 0;
    while (i < *returnSize)
    {
        indx[i] = i;
        i++;
    }
    while (
}
