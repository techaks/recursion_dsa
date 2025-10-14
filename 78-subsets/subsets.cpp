class Solution {
public:
   vector<vector<int>>res;

   void solve(int i , vector<int>& nums , vector<int>& temp){

    if(i>=nums.size()){
        res.push_back(temp);
        return;
    }

       temp.push_back(nums[i]); //include
       solve(i+1 ,nums,temp );
       temp.pop_back();
       solve(i+1 ,nums,temp ); //exclude

   }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>temp;
        solve(0,nums,temp);

        return res;

        
    }
};