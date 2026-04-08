class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1'000'000'007;

        for (auto &q : queries) {
            int l = q[0], r = q[1], k = q[2], v = q[3];

            for (int idx = l; idx <= r; idx += k) {
                long long prod = (1LL * nums[idx] * v) % MOD;
                nums[idx] = (int)prod;
            }
        }

        int result = 0;
        for (int x : nums) result ^= x;
        return result;
    }
};