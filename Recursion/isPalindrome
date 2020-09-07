bool helper(string s, int i, int j)
{
    if (i==j) return true;
    if (i>j) return true;
    if (s[i] != s[j])
        return false;
    return helper(s,i+1,j-1);
}

bool isPalindrome(string s)
{
    s = toLowerCase(s);
    int i=0,j=s.length();
    return helper(s,i,j-1);
}
