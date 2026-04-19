class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> preMax(n);
        int maxi = nums[0];
        for (int i = 0; i < n; i++) {
            maxi = max(nums[i], maxi);
            preMax[i] = maxi;
        }
        vector<int> postMin(n);
        int mini = nums[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            postMin[i] = mini;
        }

        for (int i = 0; i < n; i++) {
            int res = preMax[i] - postMin[i];
            if (res <= k)
                return i;
        }

        return -1;
    }
};