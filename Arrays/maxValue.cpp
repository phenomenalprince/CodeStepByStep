int maxValue(int a[], int n)
{
    int large = -1001;
    for (int i=0;i<n;i++)
    {
        large = max(large,a[i]);
    }
    return large;
}








