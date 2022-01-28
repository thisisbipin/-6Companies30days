class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int res = 0;
        if (arr.size() < 3)
            return res;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > arr[i - 1]) // possiblity of mountain
            {
                int currres = 1;
                while (i < arr.size() && arr[i] > arr[i - 1])
                    currres++, i++; // rising

                if (i == arr.size() || arr[i] == arr[i - 1])
                    continue; //if flat

                while (i < arr.size() && arr[i] < arr[i - 1])
                    currres++, i++; // falling

                i--; // for next possiblity
                res = max(res, currres);
            }
        }
        return res;
    }
};