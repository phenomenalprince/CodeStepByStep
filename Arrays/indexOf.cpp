int indexOf (int a[], int n, int x)
{
    for (int i=0;i<n;i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}








