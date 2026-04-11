class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries,
                                     int x) {

        unordered_map<int, int> mp;
        vector<int> res;
        int pos = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                mp[pos] = i;
                pos++;
            }
        }

        for (int q : queries) {
            if (mp.find(q) == mp.end()) {
                res.push_back(-1);
            } else {
                res.push_back(mp[q]);
            }
        }

        return res;
    }
};