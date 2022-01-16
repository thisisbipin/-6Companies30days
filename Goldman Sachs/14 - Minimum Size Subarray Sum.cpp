
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        long long res = INT_MAX, sum = 0;
        int j = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            while (sum >= target)
            {
                res = (i - j + 1 < res) ? i - j + 1 : res;
                sum -= arr[j++];
            }
        }

        return res == INT_MAX ? 0 : res;
    }
}; - Minimum Size Subarray Sum.cpp
