class Solution {
public:
    vector<vector<int>> ans;
    void solve(int idx, int target, vector<int>& arr, vector<int> temp) {
        if (target == 0) {
            for (auto & v : ans) {
                if (v == temp)
                    return;
            }
            ans.push_back(temp);
            return;
        }
        if (idx == arr.size() || target < 0) {
            return;
        }

        // singal  time
        temp.push_back(arr[idx]);
        solve(idx + 1, target - arr[idx], arr, temp);

        // muliple time
        solve(idx, target - arr[idx], arr, temp);

        // exclude
        temp.pop_back();
        solve(idx + 1, target, arr, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> temp;
        solve(0, target, arr, temp);
        return ans;
    }
};