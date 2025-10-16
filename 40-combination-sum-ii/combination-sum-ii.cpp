class Solution {
public:
    vector<vector<int>> ans;
    void solve(int idx, int target, vector<int>& arr, vector<int>& temp) {
        if ( target < 0) {
            return;
        }
        if (target == 0) {
           
            ans.push_back(temp);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {
            if(i>idx && arr[i]==arr[i-1]){
                continue;
            }
            temp.push_back(arr[i]);
            solve(i + 1, target - arr[i], arr, temp);
            temp.pop_back();
            // solve(idx + 1, target, arr, temp);
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int> temp;
        sort(arr.begin(), arr.end());
        solve(0, target, arr, temp);
        return ans;
    }
};