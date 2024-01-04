/*You are given an array 'a' of size 'n' and an integer 'k'.
Find the length of the longest subarray of 'a' whose sum is equal to 'k'.*/
USING HASHMAP
{
long long sum = 0;
    int maxlen=0;
    map<long long , int>mapp;
    for(int i=0;i<a.size();i++)
    {
         sum += a[i];
         if(sum==k)
         {
             maxlen=max(maxlen , i+1);
         }
         long long rem = sum -k;
         if(mapp.find(rem)!=mapp.end())
         {
             int len = i - mapp[rem];
             maxlen = max(maxlen , len);
         }
         if(mapp.find(sum) == mapp.end())
         {
             mapp[sum]=i;
         }
    } 
    return maxlen;
}
