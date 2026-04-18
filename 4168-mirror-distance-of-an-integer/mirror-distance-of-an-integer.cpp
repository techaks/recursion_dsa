class Solution {
public:
    int solve(int n) {
        int res = 0;
        string s = to_string(n);
        reverse(s.begin() , s.end());

        for (char ch : s) {
            res = res * 10 + ch - '0';
        }
        return res;
    }
    int mirrorDistance(int n) { return abs(n - solve(n)); }
};