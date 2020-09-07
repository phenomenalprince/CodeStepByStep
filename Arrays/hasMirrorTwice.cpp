bool hasMirrorTwice(int a1[], int n, int a2[], int m)
{
    int cnt=0;
    for (int i=0;i<n-m+1;i++)
    {
        int k=0;
        int x=0;
        for (int j=m-1;j>=0;j--)
        {
            if (a1[i+x] == a2[j])
            {
                x++;
                k++;
            }
        }
        if (k==m) cnt++;
        if (cnt==2) break;
    }
    return cnt==2;
}








