/*
Find the Index of the First Occurrence in a String

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/

int strStr(char * haystack, char * needle){
    int len1=strlen(haystack);
    int len2=strlen(needle);

    if(len1 < len2 || len2==0 || len1==0) 
    {
        return -1;
    }

    for(int i=0;i<len1;i++)
    {
        int j;
        for(j=0;j<len2;j++)
        {
            if(haystack[i+j] != needle[j])
            {
                break;
            }
        }
        if(j==len2)
        {
            return i;
        }
    }
    return -1;
}
