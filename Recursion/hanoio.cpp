void helper(int disks, int start, int end, int aux)
{
    if (disks == 1)
    {
        cout << "move disk " << disks << " from peg " << start << " to peg " << end << endl;
        return;
    }
    
    helper(disks-1,start,aux,end);
    cout << "move disk " << disks << " from peg " << start << " to peg " << end << endl;
    helper(disks-1,aux,end,start);
    
}

void hanoi(int disks, int start, int end)
{
    int aux = 3;
    if(start == 1)
    {
        if (end == 2) aux = 3;
        else if (end == 3) aux = 2;
    }else if (start == 2)
    {
        if (end == 1) aux = 3;
        else if (end == 3) aux = 1;
    }else if (start == 3)
    {
        if (end == 2) aux = 1;
        else if (end == 1) aux = 2;
    }
    return helper(disks,start, end, aux);
}
