
class Solution {
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        multiset<int> mst;
        vector<int> res;

        for (int i = 0; i < k; i++)
            mst.insert(arr[i]);

        res.push_back(*(--mst.end()));

        for (int i = k; i < n; i++) {

            mst.erase(mst.find(arr[i - k]));
            mst.insert(arr[i]);
            res.push_back(*(--mst.end()));
        }

        return res;
    }
};