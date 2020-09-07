int helper(int a, int b)
{
    if (b == 0)
        return a;
    return helper(b,a%b);
}

int gcd(int a, int b)
{
    if (a < 0 || b < 0)
        throw min(a,b);
    int x = a;
    if (b > a)
    {
        a = b;
        b = x;
    }
    return helper(a,b);
}
