int helper(Vector<int>& vec, int i, int cnt, int prevCnt)
{
    if (i==vec.size()) return prevCnt;
    if (vec[i] >= vec[i-1])
    {
        cnt++;
    }else{
        prevCnt = max(cnt,prevCnt);
        return helper(vec,i+1,1,prevCnt);
    }
    prevCnt = max(cnt,prevCnt);
    return helper(vec,i+1,cnt,prevCnt);
}

int longestRun(Vector<int> vec)
{
    if (vec.size() == 1) return 1;
    return helper(vec,1,1,0);
}
