bool contains(int a1[], int x, int a2[], int y)
{
    for (int i=0;i<x-y+1;i++)
    {
        int k=0;
        for (int j=0;j<y;j++)
        {
            if (a1[i+j] == a2[j])
            {
                k++;
            }
        }
        if (k==y) return true;
    }
    return false;
}








