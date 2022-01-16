
vector<int> largest10Numbers(vector<int> nums) {

    priority_queue<int, vector<int>, greater<int>> max10;
    for (int i = 0; i < nums.size(); i++)
    {
        max10.push(nums[i]);
        if (max10.size() > 10)
            max10.pop();
    }

    vector<int> res;
    while (!max10.empty())
    {
        res.push_back(max10.top());
        max10.pop();
    }

    return res;
}
