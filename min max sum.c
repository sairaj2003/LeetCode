/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
Example
arr= [1,3,5,7,9]
The minimum is sum 1+3+5+7 = 16 and the maximum sum is 3 + 7 + 9=24. The function prints

16 24
*/

void miniMaxSum(int arr_count, int* arr) 
{
    long sum = 0;
    long min = LONG_MAX;
    long max = LONG_MIN;
    
    for(int i = 0; i < arr_count; i++)
    {
        sum += arr[i];
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    long minsum = sum - max;
    long maxsum = sum - min;
    
    printf("%ld %ld", minsum, maxsum);
}

