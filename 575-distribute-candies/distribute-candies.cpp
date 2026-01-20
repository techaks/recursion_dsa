class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st(candyType.begin(), candyType.end());

        return min(st.size(),candyType.size() / 2);
    }
};
