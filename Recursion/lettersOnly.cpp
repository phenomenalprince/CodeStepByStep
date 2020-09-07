string helper(string s, string t, int i)
{
    if (i==s.length()) return t;
    if (s[i] >= 65 && s[i] <= 90)
    {
        t += s[i];
        return helper(s,t,i+1);
    }else if (s[i] >= 97 && s[i] <= 122)
    {
        t += s[i];
        return helper(s,t,i+1);
    }
    return helper(s,t,i+1);
}

string lettersOnly(string s)
{
    int i=0;
    string t = "";
    return helper(s,t,i);
}
