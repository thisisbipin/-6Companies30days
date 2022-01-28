
class Solution {
    bool find(string thisstr, string &inthisstr, int start = 0)
    {
        for (int i = start; i < thisstr.length(); i++)
            if (thisstr[i] != inthisstr[i])
                return false;
        return true;
    }

public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {

        string temp = "";
        vector<vector<string>> res;
        for (int i = 0; i < s.size(); i++)
        {
            temp += s[i];
            vector<string> v;
            set<string> st;
            for (int j = 0; j < n; j++)
                if (contact[j].find(temp) == 0)
                {
                    st.insert(contact[j]);
                }
            if (!st.empty())
            {
                for (auto it : st)
                    v.push_back(it);
                res.push_back(v);
            }
            else
            {
                v.push_back("0");
                res.push_back(v);
            }
        }
        return res;
    }
};