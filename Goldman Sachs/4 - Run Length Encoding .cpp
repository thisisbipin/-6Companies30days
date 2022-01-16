

string encode(string s)
{
    if (s == "") return s;
    if (s.length() == 1) return s + "1";
    string res = "";
    int count = 1;
    char prev = s[0];
    for (int i = 1; i < s.length(); i++)
        if (s[i] == prev)
            count++;
        else
        {
            res += (prev + to_string(count));
            count = 1;
            prev = s[i];
        }
    res += (prev + to_string(count));
    return res;
    //Your code here
}

