string helper(string s, int i, string t)
{
    if (i == s.length()) return t;
    if (s[i] == '-')
        t += s[i];
    else if (s[i]%2 == 0)
    {
        t += s[i];
    }
    return helper(s,i+1,t);
}

int evenDigits(int n)
{  
    string s = to_string(n);
    string t = helper(s,0,"");
    
    stringstream ss(t);
    int x = 0;
    ss >> x;
    return x;
}
