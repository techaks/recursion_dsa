class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        int ans = INT_MAX;

        for (auto& it : mp) {
            vector<int>& idx = it.second;

            if (idx.size() < 3)
                continue;

            for (int i = 0; i + 2 < idx.size(); i++) {
                int dist = 2 * (idx[i + 2] - idx[i]);
                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};