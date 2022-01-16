
class Solution {
public:
    bool canPair(vector<int> nums, int k) {
        if (nums.size() % 2 != 0)
            return false;

        vector<int> count(k, 0);
        for (int i = 0; i < nums.size(); i++)
            count[nums[i] % k]++;

        if (count[0] % 2 != 0)
            return false;
        for (int i = 1; i < k; i++)
            if (count[i] != count[k - i])
                return false;

        return true;
    }
};
