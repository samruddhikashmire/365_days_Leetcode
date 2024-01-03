#include <bits/stdc++.h>
using namespace std;
/*
You are given an array 'a' of size 'n' and an integer 'k'.
Find the length of the longest subarray of 'a' whose sum is equal to 'k'.
*/
/*
BRUTE FORCE
int main()
{
    int n,m,len=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
             int sum=0;
             for(int k=i;k<j;k++)
             {
                sum += arr[k];
             }
             if(sum==m)
             len = max(len , (j-i+1));

        }
    }
    return len;
}


OPTIMISED BRUTE
int main()
{
    int n,m,len=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
             sum+=arr[j];
             if(sum==m)
             len = max(len , (j-i+1));

        }
    }
    return len;
}
