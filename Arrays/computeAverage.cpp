float computeAverage(int a[], int x)
{
    int sum=0;
    for (int i=0;i<x;i++)
    {
        sum += a[i];
    }
    float avg = sum/(float)x;
    return avg; 
}








