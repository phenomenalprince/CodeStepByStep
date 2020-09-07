int longestSortedSequence(int a[], int n)
{
    if (n==0) return 0;
    int cnt=0;
    int k=0;
    for (int i=1;i<n;i++)
    {
        if (a[i]>=a[i-1])
        {
            k++;
        }else{
            k=0;
        }
        cnt = max(cnt,k);
    }
    return cnt+1;
}








