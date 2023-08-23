/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = 1+5+9 = 15The right to left diagonal = 3 + 5 + 9 = 17 . Their absolute difference is |15 - 17| = 2. 

*/
int diagonalDifference(int arr_rows, int arr_columns, int** arr) 
{
    int leftToRight=0;
    int rightToLeft=0;
    
    for(int i=0;i<arr_rows;i++)
    {
        for(int j=0;j<arr_columns;j++)
        {
            if(i==j)
            {
                leftToRight+= arr[i][j];
            }
        }
    }
    
    for(int i=0;i<arr_rows;i++)
    {
        for(int j=arr_columns-1;j>=0;j--)
        {
            if (i == arr_columns - 1 - j)
            {
                rightToLeft+=arr[i][j];
            }
        }
    }
    
    int diff=abs(leftToRight - rightToLeft);
    return diff;
}
