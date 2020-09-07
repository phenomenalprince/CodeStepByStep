string* switchPairs(string a[], int n)
{
    for (int i=0;i<n-1;i+=2)
    {
        swap(a[i],a[i+1]);
    }
    return a;
}








