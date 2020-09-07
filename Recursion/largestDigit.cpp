int helper(int n)
{
    if (n==0) return 0;
    return max(n%10,helper(n/10));
}
int largestDigit(int n)
{
    n = abs(n);
    return helper(n);
}
