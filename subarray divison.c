int birthday(int s_count, int* s, int d, int m) 
{
    int ways = 0;

    for (int i = 0; i <= s_count - m; i++) {
        int segmentSum = 0;
        for (int j = 0; j < m; j++) {
            segmentSum += s[i + j];
        }
        if (segmentSum == d) 
        {
            ways++;
        }
    } 
    return ways;
}
