int findRange(int a[], int n)
{
    int small=1001, large=-1001;
    for (int i=0;i<n;i++)
    {
        small = min(small,a[i]);
        large = max(large,a[i]);
    }
    return large-small + 1;
}
