int countUnique(int a[], int n)
{
    if (n==0) return 0;
    int cnt=1;
    for (int i=1;i<n;i++)
    {
        int j=0;
        // loop to check if ele appeared before or not...
        for (j=0;j<i;j++)
        {
            if (a[i] == a[j]) break;
        }
        if (i==j) cnt++;
    }
    return cnt;
}








