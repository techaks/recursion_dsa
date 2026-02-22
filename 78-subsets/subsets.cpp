class Solution {
public:
    vector<vector<int>> res;

    void backtrack(int start, vector<int>& nums, vector<int>& curr){
       
        res.push_back(curr);

         
        for(int i = start; i < nums.size(); i++){
            curr.push_back(nums[i]);        // choose
            backtrack(i + 1, nums, curr);   // explore
            curr.pop_back();                //  backtrack
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        backtrack(0, nums, curr);
        return res;
    }
};