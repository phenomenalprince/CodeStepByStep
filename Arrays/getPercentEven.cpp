double getPercentEven(int a[], int n)
{
    if (n==0) return 0.0;
    int cntEven=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]%2 == 0) cntEven++;
    }
    double percent = (double)cntEven/n *100.0;
    return percent;
}








