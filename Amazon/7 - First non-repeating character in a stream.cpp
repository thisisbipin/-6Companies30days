class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    string res="";
		    queue<char> q;
		    vector<int> v(26,0);
            for(int i=0;i<s.length();i++)
		    {
		        v[s[i]-'a']++;
		        if(v[s[i]-'a'] == 1)
		            q.push(s[i]);
		        while(!q.empty() && v[q.front()-'a']!=1)
		            q.pop();
		        if(q.empty())
		            res+="#";
		        else
		            res+=q.front();
		    }
		    
		    return res;
		}

};