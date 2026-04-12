class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }
        int count = 0;
        for (char ch : t) {
            if (mp[ch] > 0) {
                mp[ch]--;
            } else {
                count++;
            }
        }
        return count;
    }
};