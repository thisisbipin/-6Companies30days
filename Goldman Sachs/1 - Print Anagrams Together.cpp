// 1. Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance 
// in the original array.

class Solution {
public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        // Hashmap to store the all the strings corresponding to a given anagram in each vector<string>
        unordered_map<string, vector<string>> mp;


        for (auto &s : string_list) {
            string temp = s;

            // sorting the string, so as all the strings with same anagram will have a same sorted value
            sort(temp.begin(), temp.end());
            
            // finally pushing the string to it's respective place
            mp[temp].push_back(s);
        }

        // to store the final result
        vector<vector<string>> res;
        for (auto &x : mp)
            res.push_back(x.second);
        return res;
    }
};
