class Solution {
public:
    vector<vector<int>> res;
    void solve(int idx, vector<int>& store, int k, int n, vector<int>& temp) {
        if (n == 0 & temp.size() == k){
            res.push_back(temp);
            return;
        }
        if(n<0) return ;

        for(int i = idx ; i<store.size();i++){
            temp.push_back(store[i]);
            solve(i+1, store, k, n-store[i], temp);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> store = {1, 2,  3, 4, 5, 6, 7, 8, 9};
        vector<int> temp;

        solve(0, store, k, n, temp);
        return res;
    }
};