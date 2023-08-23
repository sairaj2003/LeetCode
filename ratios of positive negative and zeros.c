/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal
Sample Input

STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output

0.500000
0.333333
0.166667
*/

void plusMinus(int arr_count, int* arr) 
{
    int positive=0;
    int negative=0;
    int zero=0;
    
    for(int i=0;i<arr_count;i++)
    {
        if(arr[i] > 0)
        {
            positive++;
        }
        else if(arr[i] < 0)
        {
            negative++;
        }
        else 
        {
            zero++;
        }
    }
    
    float positiveRatio=(float)positive/arr_count;
    float negativeRatio=(float)negative/arr_count;
    float zeroRatio=(float)zero/arr_count;
    printf("%f",positiveRatio);
    printf("\n%f",negativeRatio);
    printf("\n%f",zeroRatio);
}
