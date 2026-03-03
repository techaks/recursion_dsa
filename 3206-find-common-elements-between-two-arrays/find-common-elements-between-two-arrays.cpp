class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> st1;
        unordered_set<int> st2;
        for (int num : nums1) {
            st1.insert(num);
        }
        for (int num : nums2) {
            st2.insert(num);
        }

        int count = 0;
        for (int num : nums1) {
            if(st2.find(num) != st2.end()) 
                count++;
        }
        res.push_back(count);
        count = 0;
        for (int num : nums2) {
            if(st1.find(num) != st1.end()) 
                count++;
        }
        res.push_back(count);

        return res;
    }
};