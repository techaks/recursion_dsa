class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> st;
        int code = 1 << k;

        for (int i = k; i <= s.size(); i++) {
            string temp = s.substr(i - k, k);
            if (!st.count(temp)) {
                st.insert(temp);
            }

            if (st.size() == code)
                return true;
        }

        return false;
    }
};