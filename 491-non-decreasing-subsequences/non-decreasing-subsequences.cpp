class Solution {
public:
    int n;
    vector<vector<int>> res;
    void backtrack(int idx, vector<int>& curr, vector<int>& nums) {
        if (curr.size() >= 2) {
            res.push_back(curr);
        }
        unordered_set<int> st;
        for (int i = idx; i < n; i++) {
            if ((curr.empty() || nums[i] >= curr.back()) &&
                st.find(nums[i]) == st.end()) {
                curr.push_back(nums[i]);
                backtrack(i + 1, curr, nums);
                curr.pop_back();
                st.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        n = nums.size();
        vector<int>curr;

        backtrack(0, curr, nums);
        return res;
    }
};