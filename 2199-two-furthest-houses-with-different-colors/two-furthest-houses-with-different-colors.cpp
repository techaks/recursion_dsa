class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi = 0;
        int i = 0;
        int n = colors.size();
        while (i < n) {
            int j = n - 1;
            while (j > i) {
                if (colors[i] != colors[j])
                    maxi = max(maxi, abs(j - i));
                     j--;
            }

            i++;
        }

        return maxi;
    }
};