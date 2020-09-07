bool isPalindrome(string s)
{
    int n=s.length();
    s = toLowerCase(s);
    int j=n-1;
    for (int i=0;i<n/2;i++)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        j--;
    }
    
    return true;
}

string* removePalindromes(string a[], int n)
{
    for (int i=0;i<n;i++)
    {
        if(isPalindrome(a[i]))
        {
            a[i] = "";
        }
    }
    
    return a;
}







