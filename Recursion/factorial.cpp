int helper(int n)
{
    if (n == 0 || n == 1) return 1;
    return n*helper(n-1);
}

int factorial(int n)
{
    n = abs(n);
    return helper(n);
}
