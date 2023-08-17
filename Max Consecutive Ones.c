/*
Max Consecutive Ones

Given a binary array nums, return the maximum number of consecutive 1's in the array

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
*/
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int max=0;
    
    for(int i=0;i<numsSize;i++)
    {
        int currStreak=0;
        while(i<numsSize && nums[i]==1)
        {
            currStreak++;
            i++;
        }

        if(currStreak > max)
        {
            max=currStreak;
        }
    }
    return max;
}
