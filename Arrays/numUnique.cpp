int numUnique(int a[], int n)
{
    int cnt=0;
    for (int i=0;i<n;i++)
    {
        int j=0;
        for (j=0;j<i;j++)
        {
            if (a[i] == a[j]) break;
        }
        if (i==j) cnt++;
    }
    return cnt;
}








