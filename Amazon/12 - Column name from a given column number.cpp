class Solution{
    public:
    string colName (long long int n)
    {
        string res="";
        while(n>0){
            res+=(char)('A'+(n-1)%26);
            n=(n-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};