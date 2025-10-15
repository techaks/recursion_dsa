class Solution {
public:
    vector<vector<int>> res;
    void solve(int i, vector<int>& nums, vector<int>& temp) {
        if (i >= nums.size()) {
            for(auto &v :res){
            if(v==temp) return ;
            }
            res.push_back(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        solve(i + 1, nums, temp);

        temp.pop_back();

        solve(i+1,nums,temp);
        // int next = i + 1;
        // while (next < nums.size() && nums[next] == nums[i]) {
        //     next++;
        // }
        // solve(next , nums, temp);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        solve(0, nums, temp);

        return res;
    }
};