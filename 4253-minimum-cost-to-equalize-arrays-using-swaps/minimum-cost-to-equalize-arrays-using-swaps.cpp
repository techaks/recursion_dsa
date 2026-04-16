class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;

        for (int num : nums1) {

            mp[num]++;
        }

        for (int num : nums2) {
            mp[num]-- ;
        }
        int steps = 0 ;

        for(auto it : mp){
            int freq = abs(it.second);
            if(freq%2 !=0)return -1;
            steps+=(freq/2);
        }
        return steps/2;
    }
};