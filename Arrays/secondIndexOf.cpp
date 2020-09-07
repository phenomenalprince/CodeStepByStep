int secondIndexOf(int a[], int n, int x)
{
    int cnt = 0;
    for (int i=0;i<n;i++)
    {
        if (a[i] == x)
        {
            cnt++;
        }
        if (cnt == 2) return i;
    }
    return -1;
}








