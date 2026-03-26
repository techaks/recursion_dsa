class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for (int num : nums) {
            freq[num]++;
        }
        unordered_set<int> st;
        vector<int> ans;
        for (int num : nums) {

            if (freq[num] > floor(n / 3)) {
                st.insert(num);
            }
        }
        for (auto it : st) {
            ans.push_back(it);
        }
        return ans;
    }
};