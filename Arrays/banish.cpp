int* banish(int a1[], int x, int a2[], int y)
	{
		for (int i=0;i<x;i++)
		{
			for (int j=0;j<y;j++)
			{
				if (a1[i] == a2[j])
				{
					for (int k=i;k<x-1;k++)
					{
						a1[k] = a1[k+1];
					}
					a1[x-1] = 0;
					j=-1;i=0;
				}
			}
		}
		//for (int i=0;i<x;i++)
			//cout << a1[i] << ",";
        return a1;
	}








