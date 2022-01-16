
class Solution {
public:
    string decodedString(string s) {
        int num = 0, prevNo;
        string res = "", prevString;
        stack<string> sstk;
        stack<int> nstk;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= '9' && s[i] >= '0') num = num * 10 + (s[i] - '0');
            else if (s[i] <= 'z' && s[i] >= 'a') res += s[i];
            else if (s[i] == '[') {
                sstk.push(res);
                nstk.push(num);
                num = 0;
                res = "";
            }
            else if (s[i] == ']')
            {
                prevNo = nstk.top();
                nstk.pop();
                prevString = sstk.top();
                sstk.pop();

                while (prevNo--)
                {
                    prevString += res;
                }
                res = prevString;
            }
        }
        return res;
    }
};