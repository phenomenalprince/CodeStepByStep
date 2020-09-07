bool helper(string s1, string s2, int i, int j)
{
    if (i==s1.length() && j != s2.length()) return false;
    if (j==s2.length()) return true;
    if (s1[i] == s2[j])
        return helper(s1,s2,i+1,j+1);
    return helper(s1,s2,i+1,j);
}

bool isSubsequence(string s1, string s2)
{
    int i=0,j=0;
    return helper(s1,s2,i,j);
}

