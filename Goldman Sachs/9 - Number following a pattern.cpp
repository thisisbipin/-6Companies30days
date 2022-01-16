
class Solution {
public:
    string printMinNumberForPattern(string s) {
        string res = "";
        int i = 0, j = 0;
        int count = 1;
        while (i <= s.size()) {
            if (s[i] == 'I' || i == s.size()) {
                while (count >= 1) {
                    if (count <= j) break;
                    res += (char)(count + '0');
                    count--;
                }
                j = i + 1;
                count = i + 1;
            }
            count++;
            i++;
        }
        return res;
    }
};
