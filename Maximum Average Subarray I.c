/*
Maximum Average Subarray I


You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000
*/

double findMaxAverage(int* nums, int numsSize, int k){
    double maxAvg=0.0;
    double currentSum=0.0;

    for(int i=0;i<k;i++)
    {
        currentSum+=nums[i];
    }

    maxAvg=currentSum/k;

    for(int i=k;i<numsSize;i++)
    {
        currentSum=currentSum + nums[i] - nums[i-k];
        double currentAvg=currentSum/k;

        if(currentAvg > maxAvg)
        {
            maxAvg=currentAvg;
        }
    }
    return maxAvg;
}
