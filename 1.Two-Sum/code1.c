/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums,int numsSize,int target)
{
    int* arr;
    arr = (int*)malloc(sizeof(int)*100);
    int i = 0;
    int j = 1;
    while(target != nums[i]+nums[j]) {
        if(j == numsSize - 1) {
            i++;
            j = i;
            
        }
        j++;
    }
    arr[0] = i;
    arr[1] = j;
    return arr;
}
