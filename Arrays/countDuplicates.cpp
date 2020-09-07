int countDuplicates(int a[], int n)
{
    vector<bool> vpos(1001,false);
    vector<bool> vneg(1001,false);
    int cnt=0;
    for (int i=0;i<n;i++)
    {
        if (a[i] >= 0)
        {
            if (!vpos[a[i]])
            {
                vpos[a[i]] = true;
                for (int j=i+1;j<n;j++)
                {
                    if (a[i] == a[j]) cnt++;
                }
            }
        }else{
            if (!vneg[abs(a[i])])
            {
                vneg[abs(a[i])] = true;
                for (int j=i+1;j<n;j++)
                {
                    if (a[i] == a[j]) cnt++;
                }
            }    
        }
    }
    return cnt;
}








